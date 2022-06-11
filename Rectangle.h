#include"Shape2D.h"
#ifndef Rectangle_H
#define Rectangle_H
class Rectangle:public Shape2D{
	private:
		double width;
		double height;
	public:
		Rectangle();
		Rectangle(double,double,string,bool);
		void setWidth(double);
		void setHeight(double);
		double getWidth()const;
		double getHeight()const;
		virtual double getPerimeter()const;
		virtual double getArea()const;
		virtual string toString()const;
};
#endif
