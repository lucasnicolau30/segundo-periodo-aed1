#include <stdio.h> 
#include <stdlib.h> 

int main(){ 
    FILE* file = fopen("vetor_inteiros_8bits.bin" , "rb"); 
    if(file == NULL){ 
        printf("Arquivo nao existe \n"); 
        return 1; 
    } 
    
    char n; 
    while(fread(&n ,sizeof(char) , 1 , file) == 1){ 
        printf("%d \n" , n); 
    }

    fclose(file); 
    return 0; 
}
