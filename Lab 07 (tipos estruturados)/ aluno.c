#include <stdio.h> 
#include <stdlib.h> 

typedef struct aluno{ 
    char nome[81]; 
    char matricula[8]; 
    char turma; 
    float p1 , p2 , p3; 
} Aluno; 

float calcula_media(Aluno *a){ 
    return(a -> p1 + a -> p2 + a -> p3) / 3; 
} 

void imprime_aprovados(int n , Aluno ** turmas){ 
    for(int i = 0 ; i < n ; i ++){ 
        float media = calcula_media(turmas[i]); 
        if(media >= 6.0){ printf("%s \n", turmas[i] -> nome); 
            printf("%s \n", turmas[i] -> matricula); 
            printf("%c \n", turmas[i] -> matricula); 
            printf("%c \n", turmas[i] -> turma); 
            printf("%.2f \n", media); 
        } 
    } 
} 

int main(){

    int n; 
    scanf("%d" , &n); 
    
    Aluno ** turmas = (Aluno**)malloc(n * sizeof(Aluno*)); 
    
    for(int i = 0 ; i < n ; i ++){ 
        turmas[i] = (Aluno*)malloc(sizeof(Aluno)); 
    } 
    
    for(int i = 0 ; i < n ; i ++){ 
        scanf(" %[^\n]" , turmas[i] -> nome); 
        scanf("%s" , turmas[i] -> matricula); 
        scanf(" %c" , &turmas[i] -> turma);
        scanf("%f %f %f" , &turmas[i] -> p1 , &turmas[i] -> p2 , &turmas[i] -> p3); 
    } 
    
    imprime_aprovados(n , turmas); 
    
    for(int i = 0 ; i < n ; i ++){ 
        free(turmas[i]); 
    } 
    
    free(turmas); 
    
    return 0; 
}
