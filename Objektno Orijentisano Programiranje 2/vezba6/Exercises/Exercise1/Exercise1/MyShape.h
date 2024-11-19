#pragma once

class MyShape {

protected:
	double x;
	double y;

public:
	MyShape(double x, double y) {
		this->x = x;
		this->y = y;
	}
	virtual double getArea() = 0;
	virtual double getCircumference() = 0;
};