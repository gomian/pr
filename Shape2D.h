#include"Shape.h"
#ifndef Shape2D_H
#define Shape2D_H
class Shape2D:public Shape{
	private:
		Shape shape;
	public:
		Shape2D();
		Shape2D(Shape);
		virtual double getPerimeter()const;
		virtual string toString()const;
			
};

#endif // !Shape2D
