#include<stdio.h>
#include<math.h>

int main(){
    int num,cnt=0,n;
    printf("Enter the number:");
    scanf("%d",&num);
    for(n=2;n<num;n++){
        if(num%2==0){
            cnt++;
            break;
        }
    }
    if(cnt==0){
        printf("Prime number");
    }
    else{
        printf("Not a prime number");
    }


    return 0;
}

