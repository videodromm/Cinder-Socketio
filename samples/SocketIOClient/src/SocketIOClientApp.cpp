#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"
#include "sio_client.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class SocketIOClientApp : public App {
  public:
	void setup() override;
	void update() override;
	void draw() override;
  private:
	sio::client io;
};

void SocketIOClientApp::setup()
{
	io.connect("http://127.0.0.1:3000");
	string s = "Yo Socket.io";
	// emit text
	io.socket()->emit("test_text", sio::string_message::create(s));		
}

void SocketIOClientApp::update()
{
	io.socket()->on("received", [&](sio::event& ev) {
		sio::message::ptr msg = ev.get_message();
		std::string str = msg->get_string();
	});
}

void SocketIOClientApp::draw()
{
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP( SocketIOClientApp, RendererGl )
