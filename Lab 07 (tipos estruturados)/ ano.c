#include <stdio.h> 
#include <stdlib.h> 

unsigned char meses[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 

typedef struct{ 
    unsigned char dia, mes; 
    short unsigned ano; 
} Data; 

int totalDias(Data d){ 
    int total = d.ano * 365;

    for(int i = 0 ; i < d.mes - 1 ; i ++){ 
        total += meses[i]; 
    } 
    total += d.dia; 

    return total; 
}

int diasEntre(Data d1 , Data d2){ 
    int dias1 = totalDias(d1); 
    int dias2 = totalDias(d2); 
    
    return dias2 - dias1; 
} 

int main(void) {

    int n , m; 
    scanf("%d" , &n); 
    
    Data * datas = malloc(n * sizeof(Data)); 
    
    for(int i = 0 ; i < n ; i ++){ 
        scanf("%hhu/%hhu/%hu" , &datas[i].dia , &datas[i].mes , &datas[i].ano); 
    } 
    
    scanf("%d" , &m); 
    for(int i = 0 ; i < m ; i ++){
        int a , b; scanf("%d %d" , &a , &b); 
        
        int dif = diasEntre(datas[a] , datas[b]); 
        if(dif < 0){ 
            dif = -dif; 
        } 

        printf("%d \n" , dif); 
        
        }
        
        free(datas); 

        return 0; 
}
