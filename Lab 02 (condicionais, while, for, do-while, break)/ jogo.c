#include <stdio.h> 

int main(){ 
    int usuario , computador; 
    scanf("%d %d" , &usuario , &computador); 
    if(usuario == computador){ 
        printf("empate \n"); 
    } 
    else{ 
        printf("computador venceu \n"); 
    } 
    return 0; 
}
