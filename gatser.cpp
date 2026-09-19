#include "gatser.h"
#include <cmath>
double compoundTotal(double P, double r, int n) {
	return P * pow(1 + r / 100, n);
}
double compoundInterest(double P, double r, int n) {
	return compoundTotal(P, r, n) - P;
}