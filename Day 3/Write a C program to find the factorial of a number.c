#include <stdio.h>

int main() {
    int n, factorial=1;
    printf("Enter a number: ");
    scanf ("%d",&n); 
    
    if (n=0)
    {
    printf("Factorial of 0 is 0");
    }
    else {
        for(int i=1;i<=n;i++) {
            factorial *=i;
        }
    }
        printf("Factorial of %d is %d.\n",n,factorial);
    
    return 0;
}
