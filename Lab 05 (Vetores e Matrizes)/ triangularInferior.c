#include <stdio.h> 
#define N 3 

int triangular_inferior(double M[][N]){ 
    int k = 1; 
    if(M[1][2] != 0 && M[1][3] != 0 && M[2][3] != 0){ 
        k = 0; 
    }
    return k; 
} 

int main(){ 
    double matriz[N][N]; 
    for(int i = 0 ; i < 3 ; i ++){
        for(int j = 0 ; j < 3 ; j ++){ 
            scanf("%le" , &matriz[i][j]); 
        } 
    } 
    int resultado = triangular_inferior(matriz); 
    printf("%d \n" , resultado); 
    return 0; 
}
