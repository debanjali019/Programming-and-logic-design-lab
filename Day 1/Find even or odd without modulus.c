#include<stdio.h>
int main() {

int n; 
printf("Enter a number: ");
scanf("%d",&n);
int e=(n/2)*2;
if(e==n) {
printf ("The number is even.");
}
else {
printf ("The number is odd.");
}
return 0;
}
