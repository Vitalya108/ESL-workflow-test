#include <stdio.h>
#include "math.h"

int main() {
    vector_3d v1;
    v1.x = 1;
    v1.y = 2;
    v1.z = 3;

    vector_3d v2;
    v2.x = 3;
    v2.y = 4;
    v2.z = 1;

    vector_3d sum = sum(&v1, &v2);
    vector_3d sub = sub(&v1, &v2);
    vector_3d cross = cross(&v1, &v2);
    double dot = dot(&v1, &v2);

    printf("sum = %f %f %f \n
        sub = %f %f %f \n
        cross = %f %f %f \n
        dot = %f", sum.x, sum.y, sum.z, sub.x, sub.y, sub.z, cross.x, cross.y, cross.z, dot);
    return 0;
}