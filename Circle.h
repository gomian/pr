#include"Shape2D.h"
#ifndef Circle_H
#define Circle_H
class Circle:public Shape2D{
	private:
		double radius;
	public:
		Circle();
		Circle(double,string,bool);
		void setRadius(double);
		double getRadius();
		virtual double getPerimeter();
		virtual double getArea();
		virtual string toString();
};
#endif // !Circle_H

