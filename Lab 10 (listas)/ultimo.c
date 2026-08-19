#include <stdio.h> 
#include <stdlib.h> 

typedef struct No{ 
    int info; 
    struct No* prox; 
}No; 

typedef No Lista;

Lista* lst_cria(){ 
    return NULL; 
} 

void lst_insere(Lista** l , int valor){
    No* novo_no = (No*)malloc(sizeof(No)); 
    novo_no -> info = valor; 
    novo_no -> prox = *l; *l = novo_no; 
} 

int ultimo(Lista* l){ 
    if(l == NULL){ 
        return -1;
    } 
    No* atual = l; 
    
    while(atual -> prox != NULL){ 
        atual = atual -> prox; 
    } 
    return atual -> info; 
} 

int main(void) { 
    Lista *l = lst_cria();

    int n, valor; 
    scanf("%d", &n); 
    
    for(int i = 0; i < n; i++) { 
        scanf("%d", &valor); 
        lst_insere(&l, valor); 
    } 
    printf("Ultimo: %d\n", ultimo(l)); 
    return 0;
}    
