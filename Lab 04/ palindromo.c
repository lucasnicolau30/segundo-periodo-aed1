#include <stdio.h> 

int main(){ 
    int tamanho; 
    scanf("%d" , &tamanho); 
    char String [tamanho + 1]; 
    scanf("%s" , String); 
    int inicio = 0; 
    int fim = tamanho - 1;
    int palindromo = 1;
     
    while(inicio < fim){ 
        if(String[inicio] != String[fim]){ 
            palindromo = 0; 
            break; 
            } 
            inicio ++; 
            fim --; 
        } 
        if(palindromo){ 
            printf("SIM \n"); 
        } 
        else{ 
            printf("NAO \n"); 
        } 
return 0; 
}
