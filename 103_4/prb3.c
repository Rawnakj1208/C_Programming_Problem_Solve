#include <stdio.h>

int main()
{
  int start,end;

  printf("Enter the start value: ");
  scanf("%d", &start);
  printf("Enter the end value: ");
  scanf("%d", &end);



  for (int i = end; i >= start; i-=2)
  {
    printf("%d ", i);
  }

  return 0;
}
