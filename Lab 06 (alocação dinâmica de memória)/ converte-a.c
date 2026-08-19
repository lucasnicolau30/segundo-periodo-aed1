#include <stdio.h> 
#include <stdlib.h> 

float** converte_a(int m , int n , float * mat){ 
    float ** mat2 = malloc(m * sizeof(float *)); 
    for(int i = 0 ; i< m ; i ++){ 
        mat2[i] = malloc(n * sizeof(float)); 
    } 
    for(int i = 0 ; i < m ; i ++){ 
        for(int j = 0 ; j < n ; j ++){ 
            mat2[i][j] = mat[i * n + j]; 
        }
    } 
    return mat2;
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
    float ** mat2 = converte_a(m , n , mat);
    
    for(int i = 0 ; i < m ; i ++){ 
        for(int j = 0 ; j < n ; j ++){ 
            printf("%.2f " , mat2[i][j]); 
        } 
        printf("\n"); 
    }
    
    for(int i = 0 ; i < m ; i ++){ 
        free(mat2[i]); 
    } 
    free(mat2); 
    free(mat); 
    return 0; 
}
