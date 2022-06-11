#include"Ball.h"
Ball::Ball() {
	radius = 1;
}
Ball::Ball(double newR,string newC,bool fill) {
	setRadius(newR);
	setColor(newC);
	isFilled(fill);
}
void Ball::setRadius(double newR) {
	radius = newR;
}
double Ball::getRadius() {
	return radius;
}
double Ball::getVolume() {
	return radius * 3.14159 * radius * radius * 4 / 3;
}
double Ball::getArea() {
	return 4 * 3.14159 * radius * radius;
}
string Ball::toString() {
	return "Ball";
}