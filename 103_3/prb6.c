
#include<stdio.h>
#include<math.h>

int main(){
    int num,i,n,sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    i=num;
    while(i!=0){
        n=i%10;
        sum=sum+n*n*n;
        i=i/10;
    }

    if(num==sum){
        printf("%d is an Armstrong number",num);
    }
    else{
        printf("%d is not an Armstrong number",num);
    }


    return 0;
}

