#include"Cube.h"
Cube::Cube() {
	side = 1;
}
Cube::Cube(double newS,string newC,bool fill) {
	setSide(newS);
	setColor(newC);
	isFilled(fill);
}
void Cube::setSide(double newS) {
	side = newS;
}
double Cube::getSide() {
	return side;
}
double Cube::getVolume() {
	return side * 1.0 * side * side;
}
double Cube::getArea() {
	return side * 1.0 * side * 6;
}
string Cube::toString() {
	return "Cube";
}