#include <stdio.h> 
#include <math.h> 

void lei_cos(float b , float c , float theta , float *a){ 
    *a = sqrt(pow(b , 2) + pow(c , 2) - 2 * b * c * cos(theta)); 
} 
    
int main(void) { 
    float a , b , c , theta; 
    scanf("%f %f %f" , &b , &c , &theta); 
    lei_cos(b , c , theta , &a); 
    printf("%.2f \n" , a); 
return 0;
}
