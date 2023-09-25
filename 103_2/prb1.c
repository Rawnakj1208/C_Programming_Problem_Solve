
#include<stdio.h>
#include<math.h>

int main(){
    int pr,SI,time;
    float r,CI;

    printf("Enter the principle,rate and time:");
    scanf("%d %f %d",&pr,&r,&time);
    SI=pr*r*time/100;
    CI=pr*pow((1+r/100),time);
    printf("Simple interest is:%d\n",SI);
    printf("Compound interest is:%f",CI);
    return 0;
}
