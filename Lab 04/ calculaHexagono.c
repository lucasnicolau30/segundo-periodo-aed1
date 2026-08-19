#include <stdio.h> 
#include <math.h> 

void calcula_hexagono(float l , float *A , float *P){ 
    *A = (6 * sqrt(3) * pow(l , 2) / 4); *P = l * 6; 
}

int main(){ 
    float l , area , perimetro; 
    scanf("%f" , &l); 
    calcula_hexagono(l , &area , &perimetro); 
    printf("Area: %.2f, Perimetro: %.2f \n" , area , perimetro); 
return 0; 
}
