#include <stdio.h> 
#include <math.h> 
#include <stdlib.h> 

typedef struct ponto Ponto; 

struct ponto{ 
    float x , y; 
};

typedef struct circulo Circulo; 

struct circulo{ 
    Ponto c; float r; 
}; 

int intersecao(Circulo *a , Circulo *b){ 
    float dx = b -> c.x - a -> c.x; 
    float dy = b -> c.y - a -> c.y; 
    float d = sqrt(dx * dx + dy * dy); 

    float somaRaios = a -> r + b -> r; 
    float difRaios = fabs(a -> r - b -> r);

    if(d <= somaRaios && d >= difRaios){ 
        return 1; 
    } 
    else{ 
        return 0; 
    } 
} 

int main(){ 
    
    Circulo c1 , c2;

    scanf("%f %f %f" , &c1.c.x , &c1.c.y , &c1.r); 
    scanf("%f %f %f" , &c2.c.x , &c2.c.y , &c2.r); 
    
    int resultado = intersecao(&c1 , &c2); 
    printf("%d \n" , resultado); 
    
    return 0; 
}
