#include <stdio.h> 
#define ESPACO 10 

void imprimir(int matriz[][ESPACO], int m, int n){
    for(int i = 0 ; i < m ;i ++){ 
        for(int j = 0 ; j < n ; j ++){ 
            printf("%d " , matriz[i][j]); 
        } 
        printf("\n"); 
    } 
}

void lerMatriz(int matriz[][ESPACO], int m, int n){
    for(int i = 0 ; i < m ;i ++){ 
        for(int j = 0 ; j < n ; j ++){ 
            scanf("%d" , &matriz[i][j]); 
        } 
    }
} 
        
void transposta(int matriz[][ESPACO], int *m, int *n){
    int transposta[ESPACO][ESPACO]; 
    for(int i = 0 ; i < *m ; i ++){ 
        for(int j = 0 ; j < *n ; j ++){ 
            transposta[j][i] = matriz[i][j]; 
        } 
    }
    for(int i = 0 ; i < *n ; i ++){ 
        for(int j = 0 ; j < *m ; j ++){ 
            matriz[i][j] = transposta[i][j]; 
        } 
    } 
    int temp = *n; 
    *n = *m; 
    *m = temp;
}    

void somaValores(int matriz[][ESPACO], int *m, int *n){
    for(int i = 0 ; i < *m ; i ++){ 
        for(int j = 0 ; j < *n ; j ++){ 
            int acum = 0; if(j % 2 == 0){
                for(int j2 = 0 ; j2 < *n ; j2 ++){ 
                    acum += matriz[i][j2]; 
                } 
            } 
                else{ 
                    for(int i2 = 0 ; i2 < *m ; i2 ++){
                        acum += matriz[i2][j]; 
                    } 
                } 
                matriz[i][j] = acum; 
        } 
    } 
}

int main(){ int matriz[ESPACO][ESPACO]; 
    int m, n; 
    scanf("%d %d", &m, &n); 
    lerMatriz(matriz, m, n); 
    transposta(matriz, &m, &n); 
    somaValores(matriz, &m, &n); 
    imprimir(matriz, m, n); 
    return 0; 
}
