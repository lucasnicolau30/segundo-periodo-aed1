#include <stdio.h> 
unsigned quadrado(unsigned num){ 
    int acum , quad = 0; 
    while(num != 0){ 
        acum = num % 10; num = num / 10; quad += (acum * acum); 
    } 
    return quad;
    } 
int main(){ 
    unsigned num; 
    scanf("%u" , &num); 
    printf("%u \n" , quadrado(num)); 
    return 0; 
}
