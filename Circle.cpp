#include"Circle.h"
Circle::Circle() {
	radius = 1;
}
Circle::Circle(double newR,string newC,bool fill) {
	setRadius(newR);
	setColor(newC);
	isFilled(fill);
}
void Circle::setRadius(double newR) {
	radius = newR;
}
double Circle::getRadius() {
	return radius;
}
double Circle::getPerimeter() {
	return radius * 2 * 3.14159;
}
double Circle::getArea() {
	return radius * radius * 3.14159;
}
string  Circle::toString() {
	return "Circle";
}