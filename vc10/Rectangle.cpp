#include "cinder/gl/gl.h"
#include "cinder/app/AppBasic.h"
#include "Rectangle.h"

using namespace ci;
using namespace ci::app;
using namespace std;

Rectangle::Rectangle(float x1, float y1, float x2, float y2){
	x1_ = x1;
	y1_ = y1;
	x2_ = x2;
	y2_ = y2;
}

void Rectangle::draw(){
	gl::drawSolidRect(Rectf(x1_, y1_, x2_, y2_));
}