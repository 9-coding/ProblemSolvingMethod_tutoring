#include <stdio.h>

int main(void){
    int *ptr1, *ptr2;
    int small, large;
    small = 10;
    large = 10000;
    ptr1 = &small;
    ptr2 = &large;
    small = *ptr2;
    large = *ptr1;
    *ptr2 = 100;

    printf("%d %d", *ptr1, *ptr2);
    return 0;
}