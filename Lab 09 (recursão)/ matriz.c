#include <stdio.h> 
#define N 12 

void imprimeVizi(int mat[][N] , int lin , int col , int colT){ 
    if(col > 0) printf("%d " , mat[lin][col - 1]);
    if(col >= 0){ 
        imprimeVizi(mat , lin , col - 1 , colT); 
    } 
} 

void imprimeVizi2(int mat[][N] , int lin , int col , int colT){
    if(col < colT - 1) printf("%d " , mat[lin][col + 1]); 
    if(col < colT){ 
        imprimeVizi2(mat , lin , col + 1 , colT); 
    } 
} 

void imprimeVizi3(int mat[][N] , int lin , int col , int linT){ 
    if(lin > 0) printf("%d " , mat[lin - 1][col]); 
    if(lin >= 0){ 
        imprimeVizi3(mat , lin - 1 , col , linT); 
    } 
} 

void imprimeVizi4(int mat[][N] , int lin , int col , int linT){ 
    if(lin < linT - 1) printf("%d " , mat[lin + 1][col]); 
    if(lin < linT){ 
        imprimeVizi4(mat , lin + 1 , col , linT);
    } 
} 

int main(){ 
    int linhaTamanho , colunaTamanho , i , j; 
    int posiLinha , posiColuna; int mat[N][N]; 
    linhaTamanho = colunaTamanho = i = j = posiLinha = posiColuna = 0;

    scanf("%d %d", &posiLinha , &posiColuna); 
    scanf("%d %d", &linhaTamanho , &colunaTamanho);  
    
    for(i = 0 ; i < linhaTamanho ; i++){ 
        for(j = 0 ; j < colunaTamanho ; j++){ 
            scanf("%d", &mat[i][j]); 
        } 
    } 
    
    imprimeVizi3(mat , posiLinha , posiColuna , linhaTamanho); 
    imprimeVizi4(mat , posiLinha , posiColuna , linhaTamanho); 
    imprimeVizi2(mat , posiLinha , posiColuna , colunaTamanho); 
    imprimeVizi(mat , posiLinha , posiColuna , colunaTamanho); 
    
    return 0; 
}
