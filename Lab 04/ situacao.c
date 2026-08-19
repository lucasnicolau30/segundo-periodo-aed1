#include <stdio.h> 

char situacao(float p1 , float p2 , float p3 , int faltas , int aulas , float *media){ 
    char sit; 
    *media = (p1 + p2 + p3) / 3; 
    int faltasMax = aulas / 4; 
    if(*media >= 6.0 && faltas <= faltasMax){ 
        sit = 'A'; 
    } 
    if(*media < 6.0 && faltas <= faltasMax){ 
        sit = 'R'; 
    } 
    if(faltas > faltasMax){ 
        sit = 'F'; 
    } 
    return sit; 
} 

int main(){ 
    float p1 , p2 , p3 , media
    ; int faltas , aulas;
    scanf("%f %f %f %d %d" , &p1 , &p2 , &p3 , &faltas , &aulas); 
    char sitF = situacao(p1 , p2 , p3 , faltas , aulas , &media);
    printf("Media: %.1f, Situacao: %c \n" , media , sitF); 
return 0; 
}
