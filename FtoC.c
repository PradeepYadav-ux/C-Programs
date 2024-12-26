#include<stdio.h>
int main(){
    // Code works line by line
    float fahrenheit, centigrade; // here computer is creted 2 blank boxes
    printf("Enter the temprature in Fahrenheit: "); // it is my output code
    scanf("%f",&fahrenheit); // here computer will ready to take input from user

    // Formula to convert centigrade into fahrenheit
    centigrade = (fahrenheit-32)*5/9;

    printf("The temprature in centigrade is: %f", centigrade); // Now Im given complete direction to complete the code

    return 0; // Indicates succesfull program execution
}