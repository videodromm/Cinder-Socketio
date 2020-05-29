#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class SocketIOCltApp : public App {
  public:
	void setup() override;
	void mouseDown( MouseEvent event ) override;
	void update() override;
	void draw() override;
};

void SocketIOCltApp::setup()
{
}

void SocketIOCltApp::mouseDown( MouseEvent event )
{
}

void SocketIOCltApp::update()
{
}

void SocketIOCltApp::draw()
{
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP( SocketIOCltApp, RendererGl )
