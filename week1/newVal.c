#include <stdio.h>

void newVal (int, int, float *, float *);

int main(void) {
    int n1=10, n2=15;
    float f1, f2;
    newVal (n1, n2, &f1, &f2);
    printf("%f %f", f1, f2);
}

void newVal (int val1, int val2, float *sum, float *remain) {
    *sum = val1 + val2;
    *remain = val1 % val2; 
}
