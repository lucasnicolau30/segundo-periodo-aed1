#include<stdio.h> 
#include<stdlib.h> 

typedef struct{ 
    float a; float b; float c; }Triangulo;

int verifica_triangulo(Triangulo* t){ 
    if(t -> a <= 0 || t -> b <= 0 || t -> c <= 0 || (t -> a + t -> b <= t -> c) || (t -> a + t -> c <= t -> b) || (t-> c + t -> b <= t -> a)){ 
        return 0; 
    } 
    if(t -> a == t -> b && t -> b == t -> c){ 
        return 1;
    } 
    else if(t -> a == t -> b || t -> b == t -> c || t -> a ==t -> c){ 
        return 2; 
    } 
    else{ 
        return 3; 
    } 
} 

int main() {
    Triangulo t; 
    while(scanf("%f %f %f" , &t.a , &t.b , &t.c) != EOF){
        int tipo = verifica_triangulo(&t); 
        
        if(tipo == 0){ 
            printf("triangulo inexistente \n"); 
        } 
        else if(tipo == 1){ 
            printf("triangulo equilatero \n"); 
        } 
        else if(tipo == 2){ 
            printf("triangulo isosceles \n"); 
        } 
        else{ 
            printf("triangulo escaleno \n"); 
        } 
    } 
    
    return 0; 
}
