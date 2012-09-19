/*#include "cinder/gl/gl.h"
#include "cinder/app/AppBasic.h"
#include "node.h"

using namespace ci;
using namespace ci::app;
using namespace std;


node::node(){

}

node::node(Circle* cir, node *node){
	
	next_;
	prev_;
	dataCircle_ = cir;
}

void node::insertAfter(Circle* new_data, Circle* after_cir){
	//Node* temp = new Node();
	new_data->next_ = after_cir->next_;
	new_data->prev_ = after_cir;
	after_cir->next_->prev_ = new_data;
	after_cir->next_ = new_data;
}

void node::insertBefore(Circle* new_data, Circle* before_cir){
	new_data->prev_ = before_cir->prev_;
	new_data->next_ = before_cir;
	before_cir->prev_->next_ = new_data;
	before_cir->prev_ = new_data;
}

void node::update(){

}

void node::draw(Vec2i pointer){
	
}*/