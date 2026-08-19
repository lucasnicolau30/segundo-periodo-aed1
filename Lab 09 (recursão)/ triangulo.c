#include <stdio.h> 

int triangulo_pascal(int linha, int coluna) { 
    if(coluna == 0 || coluna == linha){ 
        return 1; 
    } 
    return triangulo_pascal(linha - 1 , coluna - 1) + triangulo_pascal(linha - 1 , coluna); 
}

void imprime_tri_pascal(int linhas){ 
    static int linhaA = 0; 
    if(linhaA == linhas){ 
        return; 
    }

    for(int i = 0 ; i < linhas - linhaA - 1 ; i ++){ 
        printf(" "); 
    } 
    
    for(int k = 0 ; k <= linhaA ; k ++){ 
        printf("%d " , triangulo_pascal(linhaA , k)); 
    }

    printf("\n"); 
    linhaA ++; 
    imprime_tri_pascal(linhas); 
} 

int main(void) {
    int linhas; 
    scanf("%d", &linhas); 
    printf("Triangulo de Pascal com %d linhas:\n", linhas); 
    imprime_tri_pascal(linhas); 
    return 0; 
}
