
#include <stdio.h>

int max(int a, int b) {
    if(a>b){
        return a;
    }else{
        return b;
    }

}

int min(int a, int b) {
   if(a<b){
        return a;
    }else{
        return b;
    }
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Maximum is %d\n", max(num1, num2));
    printf("Minimum is %d\n", min(num1, num2));
    return 0;
}
