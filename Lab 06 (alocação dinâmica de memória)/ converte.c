#include <stdio.h> 
#include <stdlib.h> 
#define STR_MAX 80 

void converte(char *sequencia) { 
    for(int i = 0 ; i < STR_MAX ; i ++){ 
        if(sequencia[i] == 'u'){ 
            sequencia[i] = 't'; 
        } 
        else if(sequencia[i] == 't'){ 
            sequencia[i] = 'u'; 
        } 
    } 
}

int verifica_nucleotideos(char *dna, char *rna){ 
    int sim = 1; 
    converte(rna); 
    for(int i = 0 ; i < STR_MAX ; i ++){ 
        if(rna[i] != dna[i]){ 
            sim = 0; 
            break; 
        } 
    } 
    return sim; 
} 

int main(void){ 
    char *dna = malloc(sizeof *dna * (STR_MAX + 1)); 
    char *rna = malloc(sizeof *rna * (STR_MAX + 1));
    scanf("%s", dna); 
    scanf("%s", rna); 
    if(verifica_nucleotideos(dna, rna)){ 
        printf("Substring presente na string\n"); 
    } 
    else{ 
        printf("Substring nao presente na string\n"); 
    } 
    return 0; 
}
