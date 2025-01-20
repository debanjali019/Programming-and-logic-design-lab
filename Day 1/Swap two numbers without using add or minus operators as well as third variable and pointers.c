#include<stdio.h>
int main() {
int a=3, b=5;
a^=b^=a^=b;
printf("%d %d", a,b);
return 0;
}
