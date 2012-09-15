
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
	void mouseUp( MouseEvent event );
	void update();
	void draw();
	void prepareSettings(Settings* settings);

private:
	Circle* circle_list_;
	static const int kAppHeight = 600;
	static const int kAppWidth = 800;


	//x & y coordinates for mouse position
	float y_pos_;
	float x_pos_;

	//position of circle
	float x_pos_cir_;
	float y_pos_cir_;
	float radius;
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
	
	x_pos_cir_ = 200;
	y_pos_cir_ = 200;
	circle_list_ = new Circle(x_pos_cir_, y_pos_cir_, 50);
}

void Shape_Stacking_HW1App::mouseDown( MouseEvent event )
{
	
	x_pos_ = (float) event.getX();
	y_pos_ = (float) event.getY();

	if(x_pos_ >= x_pos_cir_-50 && x_pos_ <= x_pos_cir_+50 && y_pos_ >= y_pos_cir_-50 && y_pos_ <= y_pos_cir_+50){
		gl::color(Color8u(200, 200, 200));
	}
}

void Shape_Stacking_HW1App::mouseUp( MouseEvent event )
{
	x_pos_ = (float) event.getX();
	y_pos_ = (float) event.getY();

	//cir_cur_ = Circle(x_pos_, y_pos_, 50);
}

void Shape_Stacking_HW1App::update()
{
	Circle* cir_cur_ = circle_list_;
}

void Shape_Stacking_HW1App::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
	Circle* cur_Cir = circle_list_;
	cur_Cir->draw();
}

CINDER_APP_BASIC( Shape_Stacking_HW1App, RendererGl )
