#include <stdio.h>
#include <stdlib.h> 

float* converte_a(int m , int n , float ** mat2){ 
    float *mat = malloc(m * n * sizeof(float)); 
    for(int i = 0 ; i< m ; i ++){ 
        for(int j = 0 ; j < n ; j ++){ 
            mat[i * n + j] = mat2[i][j]; 
        } 
    } 
    return mat; 
}

int main(){ 
    int m , n; 
    scanf("%d %d" , &m , &n); 
    float ** mat2 = malloc(m * sizeof(float *)); 
    for(int i = 0 ; i < m ; i ++){ 
        mat2[i] = malloc(n * sizeof(float)); 
    } 
    for(int i = 0 ; i < m ; i ++){ 
        for(int j = 0 ; j < n ; j ++){ 
            scanf("%f" , &mat2[i][j]); 
        } 
    }

    float * mat = converte_a(m , n , mat2); 

    for(int i = 0 ; i < m ; i ++){ 
        for(int j = 0 ; j < n ; j ++){ 
            printf("%.2f " , mat[i * n + j]); 
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
