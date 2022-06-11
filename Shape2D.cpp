#include"Shape2D.h"
Shape2D::Shape2D() {

}
Shape2D::Shape2D(Shape newS) {
	shape = newS;
}
string Shape2D::toString()const {
	return "shape2D";
}
double Shape2D::getPerimeter()const {
	return 1.0;
}