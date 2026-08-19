#include <stdio.h> 

int converte(char *letra){ 
    return *letra -'a' + 1; 
} 

int main(void){ 
    char letra; 
    char maior = 'a'; 
    while(scanf("%c" , &letra)){ 
        if(letra == '0'){ 
            break; 
        } 
        if(letra >= 'a' && letra <= 'z'){ 
            if(letra > maior){ maior = letra; } 
            } 
    }
    printf("%c \n", maior); 
return 0; 
}
