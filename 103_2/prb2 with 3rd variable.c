
#include<stdio.h>
#include<math.h>

int main(){
    int a,b,temp;
     printf("Enter the numbers:");
     scanf("%d %d",&a,&b);
     temp=a;
     a=b;
     b=temp;

    printf("After swap a=%d b=%d",a,b);
    return 0;
}

