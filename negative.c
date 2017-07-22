#include<stdio.h>
int main();
{
int  n;
printf("\nenter the number");
scanf("%d",&n);
if(n>0)
{
printf("\n The number is positive");
}
else if(n<0)
{
printf("\n The number is negative");
}
else
{
printf("\n The number is zero");
}
return 0;
}
