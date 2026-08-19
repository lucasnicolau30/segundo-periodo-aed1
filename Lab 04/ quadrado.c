#include <stdio.h>
#include <math.h> 

void quadrado(int *numPtr){ 
    *numPtr = pow(*numPtr , 2); 
} 

int main(){ 
    int num; 
    scanf("%d" , &num); 
    quadrado(&num); 
    printf("%d \n" , num); 
return 0; 
}
