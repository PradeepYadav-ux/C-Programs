#include<stdio.h>
int main(){
    float a,b;
    printf("Enter the Toal Marks here: ");
    scanf("%f",&a);
    
    printf("Enter the Marks you get: ");
    scanf("%f",&b);

    float z = (a/b);
    printf("The Persentage: %f",&z);

    return 0;
}