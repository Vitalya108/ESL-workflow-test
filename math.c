#include "math.h"

vector_3d sum(const vector_3d* v1, const vector_3d* v2) {
    vector_3d res;
    res.x = v1->x + v2->x;
    res.y = v1->y + v2->y;
    res.z = v1->z + v2->z;
    return res;
}

vector_3d sub(const vector_3d* v1, const vector_3d* v2) {
    vector_3d res;
    res.x = v1->x - v2->x;
    res.y = v1->y - v2->y;
    reы.z = v1->z - v2->z;
    return res;
}

vector_3d cross(const vector_3d* v1, const vector_3d* v2) {
    vector_3d res;
    res.x = v1->y * v2->z - v1->z * v2->y;
    res.y = v1->z * v2->x - v1->x * v2->z;
    res.z = v1->x * v2->y - v1->y * v2->x;
    return res;
}

double dot(const vector_3d* v1, const vector_3d* v2) {
    double res;
    res = v1->x * v2->x + v1->y * v2->y + v1->z * v2->z;
    return res;
}