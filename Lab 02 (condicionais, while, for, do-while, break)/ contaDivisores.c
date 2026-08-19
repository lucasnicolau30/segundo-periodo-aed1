#include <stdio.h> 

int main(){ 
    int numero , contadivisores , i; 
    scanf("%d" , &numero);
    if(numero > 1){ 
        contadivisores = 0; 
        for(i = 1 ; i <= numero ; i ++){ 
            if(numero % i == 0){ 
                contadivisores ++; 
            } 
        }
        if(contadivisores == 2){ 
            printf("1 \n"); 
        } 
        else{ 
            printf("0 \n"); 
        } 
        }
        else{ 
            printf("0 \n"); 
        } 
    return 0; 
}
