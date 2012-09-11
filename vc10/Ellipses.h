class Ellipses{
public:
	Ellipses(float x_center, float y_center, float x_radius, float y_radius);

	Ellipses* next_;
	Ellipses* prev_;

	float x_cen;
	float y_cen;
	float x_rad;
	float y_rad;

	void draw();
};