#include <stdio.h> 
#include <stdlib.h> 

int* soma(int * x1, int * x2, int n){ 
    int *x3 = malloc(n * sizeof(int)); 
    for(int i = 0 ; i < n ; i ++){
        x3[i] = x1[i] + x2[i]; 
    } 
    return x3; 
} 

int main(){ 
    int n; 
    scanf("%d" , &n);
    int x1[n]; 
    int x2[n]; 
    for(int i = 0 ; i < n ; i ++){ 
        scanf("%d" , &x1[i]); 
    } 
    for(int i = 0 ; i < n ; i ++){ 
        scanf("%d" , &x2[i]); 
    }
    int *x3 = soma(x1, x2 , n); 
    for(int i = 0 ; i < n ; i ++){ 
        printf("%d " , x3[i]); 
    } 
    printf("\n"); 
    free(x3); 
    return 0; 
}
