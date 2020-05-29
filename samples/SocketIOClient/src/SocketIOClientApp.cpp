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
	void mouseDown( MouseEvent event ) override;
	void update() override;
	void draw() override;
	sio::client h;
};

void SocketIOClientApp::setup()
{
	h.connect("http://127.0.0.1:3000");
	// emit event name only:
	h.socket()->emit("test_text");
	string s = "mon_message";
	// emit text
	h.socket()->emit("test_text", sio::string_message::create(s));
	
	
}

void SocketIOClientApp::mouseDown( MouseEvent event )
{
}

void SocketIOClientApp::update()
{
}

void SocketIOClientApp::draw()
{
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP( SocketIOClientApp, RendererGl )
