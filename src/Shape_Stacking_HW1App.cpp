
#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include "../vc10/Circle.h"
#include "../vc10/Ellipses.h"
#include "../vc10/Rectangle.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class Shape_Stacking_HW1App : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
	void prepareSettings(Settings* settings);

private:
	Circle* circle;
	Ellipses* ellipse;
	//Rectangle* rect;
	static const int kAppHeight = 600;
	static const int kAppWidth = 800;
};

/**Node class
class Node{
	int data;
	Node* next;

public:
	Node(){};
	void SetData(int aData) {data = aData;};
	void setNext(Node* aNext) {next = aNext;};
	int Data() {return data;};
	Node* Next() {return next;};
};

//List class
class List{
	Node *head;
public: 
	List() {head = NULL;};
}
*/

void Shape_Stacking_HW1App::prepareSettings(Settings* settings){
	(*settings).setWindowSize(kAppWidth,kAppHeight);
	(*settings).setResizable(false);
}

void Shape_Stacking_HW1App::setup()
{
	
}

void Shape_Stacking_HW1App::mouseDown( MouseEvent event )
{
}

void Shape_Stacking_HW1App::update()
{
}

void Shape_Stacking_HW1App::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP_BASIC( Shape_Stacking_HW1App, RendererGl )
