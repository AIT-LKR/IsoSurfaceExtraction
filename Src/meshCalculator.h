#include <math.h>       /* sqrt */
#include "meshCalculator.hh"

#ifndef MESHCALCULATOR_H
#define MESHCALCULATOR_H


//https://stackoverflow.com/questions/26312570/calculate-surface-area-of-a-3d-mesh
template<typename T>
T areaOfTriangle(T p1X, T p1Y, T p1Z,
                 T p2X, T p2Y, T p2Z,
                 T p3X, T p3Y, T p3Z);

template<typename T>
T meshSurface(T *X, T *Y, T *Z,
              int numT, int *V1, int *V2, int *V3);


#endif
