#pragma once

#include <iostream>

using namespace std;

struct Complex {
    double real;
    double imag;

    Complex(double r = 0, double i = 0) {
        real = r;
        imag = i;
    }

    // Addition
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Subtraction
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    // Multiplication
    Complex operator*(const Complex& other) const {
        return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
    }

    // << Override
    friend ostream& operator<<(ostream& os, const Complex& c) {
        os << c.real << (c.imag >= 0 ? " + " : " - ") << abs(c.imag) << "i";
        return os;
    }
};
