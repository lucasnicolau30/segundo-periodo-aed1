#include <stdio.h> 
#include <math.h> 
#define PI 3.14159265358979323846264338327950288 

int main(void){ 
    double a , b , ang; 
    double coss , c; 
    scanf("%lf" , &a); 
    scanf("%lf" , &b); 
    scanf("%lf" , &ang); 
    coss = (ang * PI)/180;
    c = sqrt(a * a + b * b - 2 * a * b * cos(coss)); 
    printf("%.2f \n" , c); 
    return 0; 
}
