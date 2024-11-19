#pragma once

#include "MyShape.h"

class MySquare : public MyShape {

private:
	double a;

public:
	MySquare(double x, double y, double a) : MyShape(x, y), a(a) {}
	MySquare(double a) : MyShape(0, 0), a(a) {}

	double getArea() {
		return a * a;
	}

	double getCircumference() {
		return 4 * a;
	}
};