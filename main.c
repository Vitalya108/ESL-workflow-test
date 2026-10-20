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

    vector_3d sum_res = sum(&v1, &v2);
    vector_3d sub_res = sub(&v1, &v2);
    vector_3d cross_res = cross(&v1, &v2);
    double dot_res = dot(&v1, &v2);

    printf("sum = %f %f %f \n sub = %f %f %f \n cross = %f %f %f \n dot = %f", sum_res.x, sum_res.y,
         sum_res.z, sub_res.x, sub_res.y, sub_res.z, cross_res.x, cross_res.y, cross_res.z, dot);
    return 0;
}