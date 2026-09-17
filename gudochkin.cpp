#include "gudochkin.h"
#include <cmath>
const double PI = 3.14159265358979; 
double sphereSurface(double r) {
return 4 * PI * r * r;
}
double sphereVolume(double r){
return (4.0 * PI * r * r * r)/3.0;
}