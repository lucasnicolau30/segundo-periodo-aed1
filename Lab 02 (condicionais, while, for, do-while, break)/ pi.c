#include <stdio.h> 
#include <math.h> 

int main(){ 
    int n , a; 
    scanf("%d" , &n); 
    float pi , acum; a = 0; acum = 0.0;
    do{ 
        pi = pow(-1 , a) / (2 * a + 1); acum = acum + pi; a ++; 
    }
    while(a < n); acum = acum * 4; printf("%.6f" , acum); 
    return 0; 
}
