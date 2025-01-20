#include<stdio.h>
int main() 
{
int a=400, b=200, c=100;
if (a>b)
{
  if (a>c)
{
   printf(" a=%d is the largest number.", a);
}
else {
  printf(" c=%d is the largest number.", c);
    }
 }
else if (b>c)
{
printf ("b=%d is the largest number", b);
}
else
{
printf ("c=%d is the largest number", c);
}
return 0;
}
