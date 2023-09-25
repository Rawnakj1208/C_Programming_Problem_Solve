
#include <stdio.h>

int chk(int a) {
    if(a%2==0){
        return 1;
    }
    else{
        return 0;
    }
}



int main() {
    int num;
    printf("Enter number:\n ");
    scanf("%d",&num);
    if(chk(num)){
        printf("%d is even",num);
    }
    else{
        printf("%d is odd",num);
    }
    return 0;
}

