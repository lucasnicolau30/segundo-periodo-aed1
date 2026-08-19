#include <stdio.h> 
#include <stdlib.h> 

typedef struct No{ 
    int info; struct No* prox; 
}No; 
typedef No Lista; 

Lista* lst_cria(){ 
    return NULL; 
}

void lst_insere(Lista** l , int valor){ 
    No* novo_no = (No*)malloc(sizeof(No)); 
    novo_no -> info = valor; 
    novo_no -> prox = NULL; 
    
    if(*l == NULL){ 
        *l = novo_no; 
    } 
    else{ 
        No* temp = *l;

        while(temp -> prox != NULL){ 
            temp = temp -> prox; 
        } 
        temp -> prox = novo_no; 
    } 
} 

int maiores(Lista* l , int x){
    int cont = 0; 
    No* atual = l; 
    while(atual != NULL){ 
        if(atual -> info > x){ 
            cont ++; 
        } 
    atual = atual -> prox; 
    } 
    return cont;
}

int main(void) { 
    Lista *l = lst_cria(); 
    int n, x, valor; 
    scanf("%d %d", &n, &x); 
    
    for(int i = 0; i < n; i++) { 
        scanf("%d", &valor); 
        lst_insere(&l, valor); 
    } 
    
    printf("Maiores: %d\n", maiores(l, x)); 
    return 0; 
}
