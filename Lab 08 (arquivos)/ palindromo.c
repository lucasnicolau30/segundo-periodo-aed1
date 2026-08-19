#include <stdio.h> 
#include <stdlib.h> 

int palindromo(char * str){ 
    int ok , cont = 0; 
    while(str[cont] != '\0' && str[cont] != '\n'){ 
        cont ++; 
    }

    ok = 1; 
    int i = 0; 
    int j = cont - 1; 
    
    while(i < cont){
        if(str[i] != str[j]){ 
            ok = 0; 
            break; 
        } 
        i ++; j --; 
    } 
    return ok; 
}

int main(){ 
    char palind[100]; 
    scanf("%s" , palind); 
    FILE *arquivo = fopen(palind , "r"); 
    
    if(arquivo == NULL){
        printf("Arquivo nao existe\n"); 
        return 1; 
    } 
    
    char linha[1023]; 
    
    while(fgets(linha , 1023 , arquivo)){ 
        if(palindromo(linha)){ 
            printf("SIM\n"); 
        }
        else{ 
            printf("NAO\n"); 
        } 
    } 
    fclose(arquivo); 
    
    return 0; 
}
