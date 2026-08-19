#include <stdio.h> 

int main(){ 
    int matriz[3][3]; 
    for(int i = 0 ; i < 3 ; i ++){ 
        for(int j = 0 ; j < 3 ; j ++){ 
            scanf("%d" , &matriz[i][j]); 
            } 
    } 
    int ident = 1; 
    
    for(int i = 0 ; i < 3 ; i ++){ 
        for(int j = 0 ; j < 3 ; j ++){ 
            if(i == j){ 
                if(matriz[i][j] != 1){ 
                    ident = 0; 
                } 
            } 
            else{ 
                if(matriz[i][j] != 0){
                    ident = 0; 
                } 
            } 
        } 
    } 
    
    if(ident){ 
        printf("Matriz Identidade \n"); 
    } 
    else{ 
        printf("A Matriz não é Identidade \n"); 
    }
     
return 0; 
}
