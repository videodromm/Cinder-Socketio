#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

// SocketIO
#include "sio_client.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class _TBOX_PREFIX_App : public App {
  public:
	void setup() override;
	void update() override;
	void draw() override;
  private:
	sio::client io;
};

void _TBOX_PREFIX_App::setup()
{
	io.connect("http://127.0.0.1:3000");
	string s = "Yo Socket.io";
	// emit text
	io.socket()->emit("test_text", sio::string_message::create(s));		
}
void _TBOX_PREFIX_App::update()
{
}

void _TBOX_PREFIX_App::draw()
{
	gl::clear(Color::black());
}

CINDER_APP(_TBOX_PREFIX_App, RendererGl)
