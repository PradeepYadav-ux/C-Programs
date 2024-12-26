#include<stdio.h>
int main(){
    float  principal, rate, time,si;
    printf("Enter the Principal Amount: ");
    scanf("%f",&principal);
    printf("Enter the Rate of interest: ");
    scanf("%f",&rate);
    printf("Enter the Time period: ");
    scanf("%f",&time);

    si = (principal*rate*time)/100;
    printf(" Your simple interest is: %f",si);

    return 0;
}
