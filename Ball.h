#include"Shape3D.h"
#ifndef Ball_H
#define Ball_H
class Ball:public Shape3D {
	private:
		double radius;
	public:
		Ball();
		Ball(double,string,bool);
		void setRadius(double);
		double getRadius();
		virtual double getVolume();
		virtual double getArea();
		virtual string toString();
};
#endif

