

#include <math.h>
#include <sqrt.hpp>
double squareRoot(const double a ){
  double b = sqrt(a);
  if (b!=b)
    return -1.0;
  else
    return sqrt(a);
}