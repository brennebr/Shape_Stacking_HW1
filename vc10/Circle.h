
class Circle{
public:
	Circle(float x_axis, float y_axis, float radius);

	Circle* next_;
	Circle* prev_;

	float x_;
	float y_;
	float radius_;

	void setX(float x);
	void setY(float y);
	void draw(float x, float y);
};