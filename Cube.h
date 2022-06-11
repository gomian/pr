#include"Shape3D.h"
#ifndef Cube_H
#define Cube_H
class Cube:public Shape3D {
	private:
		double side;
	public:
		Cube();
		Cube(double,string,bool);
		void setSide(double);
		double getSide();
		virtual double getVolume();
		virtual double getArea();
		virtual string toString();
};

#endif