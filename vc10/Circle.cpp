#include "cinder/gl/gl.h"
#include "cinder/app/AppBasic.h"
#include "Circle.h"

using namespace ci;
using namespace ci::app;
using namespace std;

Circle::Circle(float x_axis, float y_axis, float radius){
	x_ = x_axis;
	y_ = y_axis;
	radius_ = radius;
}

void Circle::draw(){
	gl::drawSolidCircle(Vec2f(x_, y_), radius_);
	gl::color(Color8u(100, 100, 100));
}