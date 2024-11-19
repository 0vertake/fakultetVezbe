#include "std_lib_facilities.h"
#include "MyShape.h"
#include "MyCircle.h"
#include "MyRectangle.h"
#include "MySquare.h"

using namespace std;

void main ()
{
	vector<MyShape*> shapes(5);

	MyCircle circle1(15.0);
	MyCircle circle2(2.3);
	MyRectangle rect1(34.0,2.0);
	MyRectangle rect2(5.61,7.92);
	MySquare sq(3.33);

	shapes[0] = &circle1; 
	shapes[1] = &rect1; 
	shapes[2] = &circle2;
	shapes[3] = &sq;
	shapes[4] = &rect2;

	double x, y, a, radius;

	cout << "Circle radius: ";
	cin >> radius;
	cout << endl;

	cout << "Rectangle a: ";
	cin >> x;
	cout << "Rectangle b: ";
	cin >> y;
	cout << endl;

	cout << "Square a: ";
	cin >> a;
	cout << endl;

	MyCircle circle = MyCircle(radius);
	MyRectangle rectangle = MyRectangle(x, y);
	MySquare square = MySquare(a);

	cout << "Circle area: " << circle.getArea() << endl;
	cout << "Circle circumference: " << circle.getCircumference() << endl;

	cout << "Rectangle area: " << rectangle.getArea() << endl;
	cout << "Rectangle circumference: " << rectangle.getCircumference() << endl;
 
	cout << "Square area: " << square.getArea() << endl;
	cout << "Square circumference: " << square.getCircumference() << endl;

	/*for (int k = 0; k < 5; k++) {
		cout << "Area is " << shapes[k]->getArea() << endl;
		cout << "Circumference is " << shapes[k]->getCircumference() << endl;
		cout << endl;
	}*/
	
	return;
}
