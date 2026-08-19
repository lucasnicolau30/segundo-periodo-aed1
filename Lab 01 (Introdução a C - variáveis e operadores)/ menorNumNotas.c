#include <stdio.h> 

int main(){ 
    int valor , qNotas; 
    scanf("%d" , &valor); 
    qNotas = valor/100;
    if(qNotas >= 0){ 
        printf("R$100: %d \n" , qNotas); valor = valor%100; 
    } qNotas = valor/50; 
    if(qNotas >= 0){ 
        printf("R$50: %d \n" , qNotas); 
        valor = valor%50; 
    } qNotas = valor/20; 
    if(qNotas >= 0){
        printf("R$20: %d \n" , qNotas); 
        valor = valor%20; 
    } qNotas = valor/10; 
    if(qNotas >= 0){
        printf("R$10: %d \n" , qNotas); 
        valor = valor%10; 
    } qNotas = valor/5; 
    if(qNotas >= 0){
        printf("R$5: %d \n" , qNotas); 
        valor = valor%5; 
    } qNotas = valor/2; 
    if(qNotas >= 0){
        printf("R$2: %d \n" , qNotas); 
        valor = valor%2; 
    } qNotas = valor/1; 
    if(qNotas >= 0){
        printf("R$1: %d \n" , qNotas); 
        valor = valor%1; 
    } 
return 0; 
}
