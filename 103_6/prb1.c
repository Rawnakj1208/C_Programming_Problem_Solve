#include <stdio.h>

int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
int div(int a,int b){
    return a/b;
}
int main(){
    int num1,num2;
    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);
    int addition=add(num1,num2);
    int subtract=sub(num1,num2);
    int multiply=mul(num1,num2);
    int divide=div(num1,num2);
    printf("\nThe add is :%d",addition);
    printf("\nThe subtract is :%d",subtract);
    printf("\nThe multiply is :%d",multiply);
    printf("\nThe divie is :%d",divide);

}
