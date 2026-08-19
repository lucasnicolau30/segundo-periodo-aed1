#include <stdio.h> 

int main(void) { 
    int n , i , maior = 0 , menor = 100 , numero; 
    scanf("%d" , &n); 
    for(i = 0 ; i < n ; i ++){ 
        scanf("%d" , &numero); 
        if(numero > maior){ 
            maior = numero; 
        } 
        if(numero < menor){ 
            menor = numero; 
        }
    } 
    printf("Maior: %d \n" , maior); 
    printf("Menor: %d \n" , menor); 
    return 0; 
}

