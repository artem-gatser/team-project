#include "lukanin.h"
#include <cmath>
double springForce(double k, double x) {
	return k * x;
}
double springEnergy(double k, double x) {
	return k * x * x / 2;
}