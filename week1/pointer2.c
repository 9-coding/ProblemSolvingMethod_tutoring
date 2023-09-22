#include <stdio.h>

int main(void){
    float *fptr;
    int *iptr;
    float fvalue;
    int ivalue;

    ivalue = 200;
    fvalue = 314.72;
    iptr = &ivalue;
    fptr = &fvalue;

    *fptr = *fptr - 300.0;
    *iptr = *iptr + 300;

    printf("%.2f %d", *fptr, *iptr);
    return 0;
}