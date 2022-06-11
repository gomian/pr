#include"Shape.h"
#ifndef Shape3D_H
#define Shape3D_H
class Shape3D :public Shape {
private:
	Shape shape;
public:
	Shape3D();
	Shape3D(Shape);
	virtual double getVolume()const;
	virtual string toString()const;
};

#endif // !Shape2D

