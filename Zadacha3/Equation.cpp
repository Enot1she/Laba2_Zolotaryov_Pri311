#include <cmath>
#include "Equation.h"



double getDiscriminant(double a, double b, double c) {
	double d = b * b - 4 * a * c;
	return d;
}

double getRoot1(double a, double b, double c) {
	double d = getDiscriminant(a, b, c);
	double x1 = ((-b) + sqrt(d)) / (2 * a);
	return x1;

}
double getRoot2(double a, double b, double c) {
	double d = getDiscriminant(a, b, c);
	double x2 = ((-b) + sqrt(d)) / (2 * a);
	return x2;

}