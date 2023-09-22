#include <stdio.h>

int main(void){
    int ival, newval, *ptr;
    ptr = &ival;
    *ptr = 300;
    newval = *ptr * 27;
    printf("%d", *ptr);
    return 0;
}
