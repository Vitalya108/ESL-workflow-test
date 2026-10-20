typedef struct {
    double x;
    double y;
    double z;
} vector_3d;

vector_3d sum(const vector_3d* v1, const vector_3d* v2);

vector_3d sub(const vector_3d* v1, const vector_3d* v2);

vector_3d cross(const vector_3d* v1, const vector_3d* v2);

double dot(const vector_3d* v1, const vector_3d* v2);