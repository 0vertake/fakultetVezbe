#pragma once
#include "MyShape.h"

class MyCircle : public MyShape {

private:
	double radius;

public:
	MyCircle(double x, double y, double radius) : MyShape(x, y), radius(radius) {}

	MyCircle(double radius) : MyShape(0, 0), radius(radius) {}

	double getArea() {
		return 3.14 * radius * radius;
	}

	double getCircumference() {
		return 2 * radius * 3.14;
	}
};