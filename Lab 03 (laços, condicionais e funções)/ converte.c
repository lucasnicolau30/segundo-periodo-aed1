#include <stdio.h> 

int converte(char letra){ 
    int num = letra - 'a' + 1; 
    return num; 
} 
int main(void){ 
    char letra; 
    int somatorio = 0;
    while( scanf("%c" , &letra)){ 
        if(letra == '0'){ 
            break; 
        } 
        if(letra >= 'a' && letra <= 'z'){ 
            somatorio += converte(letra); 
        } 
    } 
    printf("%d \n" , somatorio += converte(letra)); 
    
    printf("%d \n" , somatorio); 
    return 0; 
}
