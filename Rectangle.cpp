#include "Rectangle.h"
Rectangle::Rectangle() {
}
Rectangle::Rectangle(double newW, double newH,string newC,bool fill) {
	setWidth(newW);
	setHeight(newH);
	setColor(newC);
	isFilled(fill);
}
void Rectangle::setWidth(double newW) {
	width = newW;
}
double Rectangle::getWidth()const {
	return width;
}
void Rectangle::setHeight(double newH) {
	height = newH;
}
double Rectangle::getHeight()const {
	return height;
}
double Rectangle::getPerimeter()const {
	return height * 2.0 + width * 2.0;
}
double Rectangle::getArea()const {
	return height * 1.0 * width;
}
string Rectangle::toString()const{
	return "Rectangle";
}
