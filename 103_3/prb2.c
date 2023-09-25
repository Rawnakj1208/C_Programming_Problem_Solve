#include<stdio.h>
#include<math.h>

int main(){
    int marks;
    printf("Enter the marks:");
    scanf("%d",&marks);
    if(marks>=90 && marks<=100){
        printf("A+");
    }
    else if(marks>=80 && marks<90){
        printf("A");
    }
    else if(marks>=70 && marks<80){
        printf("B+");
    }
    else if(marks>=60 && marks<70){
        printf("B");
    }
    else if(marks>=50 && marks<60){
        printf("C");
    }
    else if(marks<50){
        printf("F");
    }
    return 0;
}

