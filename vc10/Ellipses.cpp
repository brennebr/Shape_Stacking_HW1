#include "cinder/gl/gl.h"
#include "cinder/app/AppBasic.h"
#include "Ellipses.h"

using namespace ci;
using namespace ci::app;
using namespace std;

Ellipses::Ellipses(float x_center, float y_center, float x_radius, float y_radius){
	x_cen = x_center;
	y_cen = y_center;
	x_rad = x_radius;
	y_rad = y_radius;
}

void Ellipses::draw(){
	
	gl::drawSolidEllipse(Vec2f(x_cen, y_cen), x_rad, y_rad);
	gl::color(Color8u(200,200,200));
}