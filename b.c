#include<stdio.h>
int main()
{
  int Number, i = 1, Sum = 0;
  
  printf("\nPlease Enter any Integer Value\n");
  scanf("%d", &Number);
  
  while(i <= Number)
  {
     Sum = Sum + i;
     i++;
  }
  
  printf("Sum of Natural Numbers = %d", Sum);
  return 0;
}
