#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class SocketIOClientApp : public App {
  public:
	void setup() override;
	void mouseDown( MouseEvent event ) override;
	void update() override;
	void draw() override;
};

void SocketIOClientApp::setup()
{
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
