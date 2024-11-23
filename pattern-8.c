#include<stdio.h>
int main() 
{
  int i, j;
  char alphabet='A';
  for(i=5; i>=1; i--)
  {
    for (j=1; j<=i; j++)
    {
      printf("%c ", alphabet);
      alphabet++;
    }
    printf("\n");             
  }
  return 0;
}