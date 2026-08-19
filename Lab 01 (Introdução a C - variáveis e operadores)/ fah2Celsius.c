#include <stdio.h> int main(){ 
    float celsius , fahrenheit; 
    scanf("%f" , &fahrenheit); 
    celsius = (fahrenheit - 32) * 5.0f / 9.0f; 
    printf("%.2f \n" , celsius); 
    return 1; 
}
