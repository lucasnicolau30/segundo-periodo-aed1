#include <stdio.h> 

float pondera(int n , float *v , float *w){ 
    float fim; 
    float somatorio = 0; 
    float peso; 
    for(int i = 0 ; i < n ; i ++){ 
        somatorio +=v[i] * w[i]; 
    } 
    for(int j = 0 ; j < n ; j ++){ 
        peso += w[j]; 
    } 
    fim = somatorio / peso; 
    return fim;
}

int main(){ 
    int n; 
    scanf("%d" , &n); 
    float v[n]; 
    float w[n]; 
    for(int i = 0 ; i < n ; i ++){ 
        scanf("%f" , &v[i]); 
    }
    for(int i = 0 ; i < n ; i ++){ 
        scanf("%f" , &w[i]); 
    } 
    float resultado = pondera(n , v , w); 
    printf("%.2f \n" , resultado); 
    return 0; 
}
