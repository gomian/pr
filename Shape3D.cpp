#include"Shape3D.h"
Shape3D::Shape3D() {
}
Shape3D::Shape3D(Shape newS) {
	shape = newS;
}
double Shape3D::getVolume() const{
	return 0.0;
}

string Shape3D::toString()const {
	return "Shape3D";
}