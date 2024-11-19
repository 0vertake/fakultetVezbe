#pragma once
#include "MyShape.h"

class MyRectangle : public MyShape {

private:
	double a;
	double b;

public:
	MyRectangle(double x, double y, double a, double b) : MyShape(x, y), a(a), b(b) {}
	MyRectangle(double a, double b) : MyShape(0, 0), a(a), b(b) {}

	double getArea() {
		return a * b;
	}

	double getCircumference() {
		return 2 * (a + b);
	}
};