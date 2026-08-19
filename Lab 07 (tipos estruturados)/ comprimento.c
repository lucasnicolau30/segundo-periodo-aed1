#include<stdio.h> 
#include<math.h> 

typedef struct ponto Ponto; 
struct ponto { 
    float x,y; 
}; 

typedef struct circulo Circulo; 
struct circulo { 
    Ponto c;
    float r; 
}; 

float distancia(Ponto *p1 , Ponto *p2){ 
    return sqrt(powf(p2 -> x - p1 -> x , 2) + powf(p2 -> y - p1 -> y , 2)); 
}

float comprimento(int n , Ponto *v){ 
    float total = 0.0; 
    for(int i = 0 ; i < n - 1 ; i ++){ 
        total += distancia(&v[i] , &v[i + 1]); 
    } 

    return total; 
}

int main(){ 
    int n; 
    scanf("%d" , &n); 
    
    Ponto pontos[n]; 
    for(int i = 0 ; i < n ; i ++){ 
        scanf("%f %f" , &pontos[i].x , &pontos[i].y); 
    } 
    
    float resultado = comprimento(n , pontos); 
    printf("%.2f \n" , resultado); 
    
    return 0; 
}
