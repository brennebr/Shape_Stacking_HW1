#include "../vc10/Circle.h"

class Node{
public:
	Node(Circle* cir, Node *node);

	Node* next_;
	Node* prev_;
	Circle* dataCircle_;

	void insertAfter();
	void insertBefore();
};