#include<stdio.h> 
#include<stdlib.h> 

float* transposta(int m, int n, float* mat){ 
    float *tr = malloc(m * n * sizeof(int));
    for(int i = 0 ; i < m ; i ++){ 
        for(int j = 0 ; j < n ; j ++){
             tr[j * m + i] = mat[i * n + j];
        } 
    } 
    return tr; 
}

int main(){ 
    int m , n; 
    scanf("%d %d" , &m , &n); 
    float *mat = malloc(m * n * sizeof(int)); 
    for(int i = 0 ; i < m ; i ++){
        for(int j = 0 ; j < n ; j ++){
            scanf("%f" , &mat[i * n + j]); 
        } 
    }
    float *tr = transposta(m, n, mat); 
    
    for(int i = 0 ; i < n ; i ++){ 
        for(int j = 0 ; j < m ; j ++){
            printf("%.2f " , tr[i * m + j]); 
        } 
        printf("\n"); 
    } 
    free(mat); 
    free(tr); 
}
