#include "cinder/gl/gl.h"
#include "cinder/app/AppBasic.h"
#include "Node.h"

using namespace ci;
using namespace ci::app;
using namespace std;

Node::Node(Circle* cir, Node *node){
	
	next_;
	prev_;
	dataCircle_ = cir;
}

void insertAfter(){

}

void insertBefore(){

}