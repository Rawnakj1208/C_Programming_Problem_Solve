
#include<stdio.h>
#include<math.h>

int main(){

   int a,b,c,max;
    scanf("%d %d %d",&a,&b,&c);
   max=((a>b &&a>c)? a: ((b>a&&b>c)? b:c));
   printf("maximum number is: %d",max);

    return 0;
}

