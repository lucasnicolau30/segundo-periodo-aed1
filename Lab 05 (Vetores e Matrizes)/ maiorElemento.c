#include <stdio.h> 

void maior_elemento(int *v, int n, int *maior){ 
    int maior1 = v[0]; 
    for(int i = 0 ; i < n ; i ++){ 
        if(maior1 < v[i]){ 
            maior1 = v[i];
        } 
    } 
    *maior = maior1; 
} 

void ler_vetor(int *v, int n){ 
    for(int i = 0 ; i < n ; i ++){ 
        scanf("%d" , &v[i]); 
    } 
} 

int main(void){
    int n; 
    int maior; 
    scanf("%d", &n); 
    int v[n]; 
    ler_vetor(v, n); 
    maior_elemento(v, n, &maior); 
    printf("%d \n" , maior); 
    return 0; 
}
