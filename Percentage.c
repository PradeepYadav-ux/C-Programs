#include<stdio.h>
int main(){
    float Maths = 45; 
    float Physics = 77; 
    float Chemistry = 78; 
    float English = 66; 
    float Economics = 90; 
    float Percentage = (Maths + Physics + Chemistry + English + Economics)/5;
    printf("Percentage of 5 subjects is: %f",Percentage);
    return 0;
}