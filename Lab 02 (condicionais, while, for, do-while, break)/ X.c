#include <stdio.h> 

int main(void){ 
    char c; 
    scanf(" %c" , &c); 
    int i , j; 
    int largura = 10; 
    int altura = 12;
    for(i = 0 ; i < altura ; i ++){ 
        for(j = 0 ; j < largura ; j ++){
             if(i == j || j == (largura - 1 - i)){ 
                printf("%c%c" , c , c); 
            } 
            else{ 
                printf(" ");
                } 
                } 
                printf("\n"); 
                
    } 
    return 0; 
}
