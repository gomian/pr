#include"Shape.h"
#include<iostream>
#include<string>
using namespace std;
Shape::Shape() {}
Shape::Shape(string newC) {
	setColor(newC);
}
void Shape::setColor(string newC) {
	color = newC;
}
string Shape::getColor()const {
	return color;
}
void Shape::isFilled(bool newF) {
	filled = newF;
}
bool Shape::setFilled()const {
	return filled;
}
string Shape::toString()const {
	return "Shape";
}
double Shape::getArea()const {
	return 1.0;
}