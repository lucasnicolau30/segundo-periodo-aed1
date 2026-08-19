#include <stdio.h> 

int testa_PA(int n , int *v){ 
    if(n < 2){ 
        return 0; 
    } 
    int k = v[1] - v[0]; 
    for(int i = 1 ; i < n ; i ++){ 
        if(v[i] != v[0]+ i * k){ 
            return 0; 
        } 
    } 
    return k; 
} 

int main(){ 
    int n;
    scanf("%d" , &n); 
    int v[n]; 
    for(int i = 0 ; i < n ; i ++){ 
        scanf("%d" , &v[i]); 
    } 
    int resultado = testa_PA(n , v); 
    printf("%d" , resultado); 
    return 0;
}
