#include<stdio.h>
int main(){
    int a,b; // a>b a must be greater than b
    printf("Enter the Dividend: ");
    scanf("%d",&a);
    printf("Enter the Divisor: ");
    scanf("%d",&b);
    int q = a/b;
    int r = a-(b*q); // Divident-Divisor*Quotient=Remainder
    printf("The remainder when %d is divided by %d is:  %d",a,b,r);
    

    return 0;
}