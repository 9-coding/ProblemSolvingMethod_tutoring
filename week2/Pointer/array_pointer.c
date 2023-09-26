#include <stdio.h>
int main() {
    int arr[3] = {10,20,30};
    
    printf("arr address : %p\n", &arr);
    
    for (int i = 0; i < 3; i++) {
        printf("arr[%d] address : %p\n",i, &arr[i]);
    }
}
