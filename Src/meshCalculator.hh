#include <math.h>       /* sqrt */

#ifndef MESHCALCULATOR_HH
#define MESHCALCULATOR_HH

template<typename T>
T areaOfTriangle(T p1X, T p1Y, T p1Z,
                 T p2X, T p2Y, T p2Z,
                 T p3X, T p3Y, T p3Z)
{
    T ax = p2X - p1X;
    T ay = p2Y - p1Y;
    T az = p2Z - p1Z;
    T bx = p3X - p1X;
    T by = p3Y - p1Y;
    T bz = p3Z - p1Z;
    T cx = ay*bz - az*by;
    T cy = az*bx - ax*bz;
    T cz = ax*by - ay*bx;

    return 0.5 * sqrt(cx*cx + cy*cy + cz*cz);
}

template<typename T>
T meshSurface(T *X, T *Y, T *Z,
              int numT, int *V1, int *V2, int *V3)
{
    T area = 0.;
    for (int n=0; n<numT; n++) {
        area += areaOfTriangle(X[V1[n]], Y[V1[n]], Z[V1[n]],
                               X[V2[n]], Y[V2[n]], Z[V2[n]],
                               X[V3[n]], Y[V3[n]], Z[V3[n]]);
    }
    return area;
}

#endif
