

#include<stdio.h>
#include<math.h>

int main(){
    int a,result;
    printf("Enter the number:");
    scanf("%d",&a);
    if(a%2==0){
        result=a/2;
    }
    else{
        result=a*2;
    }
    printf("Result is:%d\n",result);

    return 0;
}
