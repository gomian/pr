#include<iostream>
#include<string>
using namespace std;
#ifndef Shape_H
#define Shape_H
class Shape
{
	private:
		bool filled;
		string color;
	public:
		Shape();
		Shape(string);
		void setColor(string);
		string getColor()const;
		void isFilled(bool);
		bool setFilled()const;
		virtual string toString()const;
		virtual double getArea()const;
};



#endif // 

