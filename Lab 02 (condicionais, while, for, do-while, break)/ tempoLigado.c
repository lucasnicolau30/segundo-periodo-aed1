#include "stdio.h" 

int main(){ 
    int evento , maior_tempo = 0 , tempoAtual = 0 , tempoLigado = -1; int h , m , s; 
    while(1){ 
        scanf("%d" , &evento);
        if(evento == 2){ 
            break; 
        } 
        scanf("%d:%d:%d" , &h , &m , &s); 
        tempoAtual = h * 3600 + m * 60 + s;
        if(evento == 1){ 
            tempoLigado = tempoAtual; 
        } 
        else if(evento == 0){ 
            if(tempoLigado != -1){
                int intervalo = tempoAtual - tempoLigado; 
                if(intervalo > maior_tempo){ 
                    maior_tempo = intervalo; 
                } 
                tempoLigado = -1; 
            }
        } 
    } 
    printf("%d\n",maior_tempo); 
return 0; 
}
