
#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include "../vc10/Circle.h"
//#include "../vc10/Ellipses.h"
//#include "../vc10/Rectangle.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class Shape_Stacking_HW1App : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );
	void mouseDrag( MouseEvent event );
	void update();
	void draw();
	void prepareSettings(Settings* settings);

private:
	Circle* circle_list_;
	Circle* cur_cir_;
	static const int kAppHeight = 600;
	static const int kAppWidth = 800;


	//x & y coordinates for mouse position
	float y_pos_;
	float x_pos_;

	//position of circle
	float x_pos_cir_;
	float y_pos_cir_;
	float radius;

	//Node* sentinel_;
	bool isInCircle_;
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
	//sentinel_ = new Node();
	isInCircle_ = false;
}

void Shape_Stacking_HW1App::mouseDown( MouseEvent event )
{
	
	x_pos_cir_ = (float) event.getX();
	y_pos_cir_ = (float) event.getY();

	if(x_pos_ >= x_pos_cir_-50 && x_pos_ <= x_pos_cir_+50 && y_pos_ >= y_pos_cir_-50 && y_pos_ <= y_pos_cir_+50)
	{
		isInCircle_ = true;
		gl::color(Color8u(200, 200, 200));
	}
}

void Shape_Stacking_HW1App::mouseDrag( MouseEvent event )
{
	if(isInCircle_){
		x_pos_cir_ = (float) event.getX();
		y_pos_cir_ = (float) event.getY();
		Circle cur_ = *circle_list_;
		cur_.draw(x_pos_cir_, y_pos_cir_);
	}
	
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
	cur_Cir->draw(x_pos_cir_, y_pos_cir_);
}

CINDER_APP_BASIC( Shape_Stacking_HW1App, RendererGl )
