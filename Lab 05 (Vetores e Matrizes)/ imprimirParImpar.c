#include <stdio.h> 
#define N 10 void 

imprimirParImpar(int M[][N], int numLinhas, int numColunas){ 
    for(int i = 0 ; i < numLinhas ; i ++){ 
        for(int j = 0; j < numColunas ; j ++){ 
            if(M[i][j] % 2 == 0 && M[i][j] != 0){ 
                printf("1 "); 
            } 
                else{ 
                    printf("0 "); 
                } 
        } 
        printf("\n"); 
    } 
}
                
int main(){ 
    int matriz[N][N]; 
    int numLinhas; 
    int numColunas; 
    scanf("%d %d" , &numLinhas , &numColunas); 
    for(int i = 0 ; i < numLinhas ; i ++){ 
        for(int j = 0 ; j < numColunas ; j ++){ 
            scanf("%d" , &matriz[i][j]); 
        } 
    } 
    imprimirParImpar(matriz , numLinhas , numColunas); 
return 0; 
}
