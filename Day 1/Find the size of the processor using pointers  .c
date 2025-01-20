#include <stdio.h>

int main() {
    int* ptr;
    int num = 1;

    
    ptr = &num;

    
    printf("Address of num: %p\n", ptr);
    ptr++;

    printf("Address after incrementing ptr: %p\n", ptr);
    int size = (ptr - &num) * sizeof(int);


    printf("Size of the processor's word: %d bytes\n", size);

    return 0;
}


