#include"Ball.h"
#include"Circle.h"
#include"Cube.h"
#include"Rectangle.h"
#include<iomanip>
void equalArea(Shape a, Shape b) {
	Shape* x = &a;
	Circle* c1 = dynamic_cast<Circle*>(x);
	Rectangle* r1 = dynamic_cast<Rectangle*>(x);
	Shape* y = &a;
	Circle* c2 = dynamic_cast<Circle*>(y);
	Rectangle* r2 = dynamic_cast<Rectangle*>(y);
	cout << fixed << setprecision(2) << a.toString() << " " << x->getArea();
	if (x->getArea() == y->getArea()) {
		cout<<" != ";
	}
	else
	{
		cout << " == ";
	}
	cout << b.toString() << " " << y->getArea() << endl;
}
void equalPerimeter(Shape2D &a, Shape2D &b) {
	Shape2D* x = &a;
	Shape2D* y = &b;
	Circle *c = dynamic_cast<Circle*>(x);
	Rectangle* r = dynamic_cast<Rectangle*>(y);
	cout << fixed << setprecision(2) << "circle " << c->getPerimeter();
	if (c->getPerimeter() == r->getPerimeter())
		cout << " == ";
	else
		cout << " != ";
	cout << "rectangle" << " " << r->getPerimeter() << endl;
}
void equalVolume(Shape3D &a, Shape3D &b) {
	Shape3D* x = &a;
	Shape3D* y = &b;
	Ball* ba = dynamic_cast<Ball*>(x);
	Cube* c = dynamic_cast<Cube*>(y);
	cout << fixed << setprecision(2) << "ball " << ba->getVolume();
	if (ba->getVolume() == c->getVolume())
		cout << " == ";
	else
		cout << " != ";
	cout << "cube" << " " << c->getVolume() << endl;
}

void display(Shape& s)
{
	Shape* x = &s;
	Circle* c = dynamic_cast<Circle*>(x);
	Rectangle* r = dynamic_cast<Rectangle*>(x);
	Ball* b = dynamic_cast<Ball*>(x);
	Cube* cu = dynamic_cast<Cube*>(x);
	if (c != NULL) {
		cout << "circle" << ", " << c->getRadius() << ", " << c->getColor() << ", ";
		cout << fixed << setprecision(2) << c->getArea() << endl;
	}
	if (r != NULL) {
		cout << defaultfloat << "rectangle" << ", " << r->getWidth() << ", " << r->getHeight() << ", " << r->getColor() << ", ";
		cout << fixed << setprecision(2) << r->getArea() << endl;
	}
	if (b != NULL) {
		cout << defaultfloat << "ball" << ", " << b->getRadius() << ", " << b->getColor() << ", ";
		cout << fixed << setprecision(2) << b->getArea() << endl;
	}
	if (cu != NULL) {
		cout << defaultfloat << "cube" << ", " << cu->getSide() << ", " << cu->getColor() << ", ";
		cout << fixed << setprecision(2) << cu->getArea() << endl;
	}
}
int main() {
	Circle circle(5, "yellow", 1);
	Rectangle rectangle(3, 4, "red", 0);
	Ball ball(5, "blue", 1);
	Cube cube(4, "black", 0);
	display(circle);
	display(rectangle);
	display(ball);
	display(cube);
	equalPerimeter(circle, rectangle);
	equalVolume(ball, cube);
}