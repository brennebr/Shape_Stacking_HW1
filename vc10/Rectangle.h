class Rectangle{
public:
	Rectangle(float x1, float y1, float x2, float y2);

	Rectangle* next_;
	Rectangle* prev_;

	float x1_;
	float y1_;
	float x2_;
	float y2_;

	void draw();
};