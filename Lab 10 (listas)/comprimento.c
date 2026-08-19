#include <stdio.h> 
#include <stdlib.h> 

typedef struct No{ 
    int valor; 
    struct No* prox; 
}No; 
typedef No Lista; 

Lista* lst_cria(){ 
    return NULL; 
} 

void lst_insere(Lista** l , int valor){ 
    No* novo_no = (No*)malloc(sizeof(No)); 
    
    novo_no -> valor = valor; 
    novo_no -> prox = NULL; 
    
    if(*l == NULL){ 
        *l =novo_no; 
    } 
    else{ 
        No* temp = *l; 
        while(temp -> prox != NULL){ 
            temp = temp -> prox; 
        } 
        temp -> prox = novo_no; 
    } 
} 

int comprimento(Lista* l){
    int cont = 0; No* atual = l; 
    
    while(atual != NULL){ 
        cont ++; atual = atual -> prox; 
    } 
    return cont; 
} 

int main(void) {
    Lista *l = lst_cria(); 
    int valor;
    
    while(scanf("%d", &valor), valor >= 0) { 
        lst_insere(&l, valor); 
    } 
    printf("Comprimento: %d\n", comprimento(l)); 
    return 0;
}