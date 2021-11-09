#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef double vec3_t[3];

void v3_print(vec3_t v) {
    printf("<%g, %g, %g>", v[0], v[1], v[2]);
}

void v3_zero(vec3_t v) {
    v[0] = 0.0;
    v[1] = 0.0;
    v[2] = 0.0;
}

void v3_set(vec3_t v, double x, double y, double z) {
    v[0] = x;
    v[1] = y;
    v[2] = z;
}

void v3_sum(vec3_t r, vec3_t v1, vec3_t v2) {
    for (int i = 0; i < 3; i++) {
        r[i] = v1[i] + v2[i];
    }
}

void v3_sub(vec3_t r, vec3_t v1, vec3_t v2) {
    for (int i = 0; i < 3; i++) {
        r[i] = v1[i] - v2[i];
    }
}

double v3_dot(vec3_t v1, vec3_t v2) {
    double r = 0.0;
    for (int i = 0; i < 3; i++) {
        r += v1[i] * v2[i];
    }
    return r;
}

double v3_length(vec3_t v1, vec3_t v2) {
    return sqrt(v3_dot(v1, v2));
}

int main(){
    vec3_t v = {1.0, 0.0, 0.0};
    vec3_t w = {0.0, 1.0, 0.0};
    vec3_t r;
    double s;

    // display v
    printf("v: ");
    v3_print(v);
    printf("\n");
    // display w
    printf("w: ");
    v3_print(w);
    printf("\n");

    // display v + w
    v3_sum(r, v, w);
    printf("v + w: ");
    v3_print(r);
    printf("\n");
    // display v + w
    v3_sub(r, v, w);
    printf("v - w: ");
    v3_print(r);
    printf("\n");
    // display v . w
    s = v3_dot(v, w);
    printf("v . w: ");
    printf("%g", s);
    printf("\n");
    // display lenght(v, w)
    s = v3_length(v, w);
    printf("lenght(v, w): ");
    printf("%g", s);
    printf("\n");    

    return 0;
}
