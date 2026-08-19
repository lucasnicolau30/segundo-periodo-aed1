#include <stdio.h> 
#include <stdlib.h> 

int* somente_pares (int n, int * v, int *npares){ 
    *npares = 0; 
    for(int i = 0 ; i < n ; i ++){
        if(v[i] % 2 == 0){ 
            (*npares) ++; 
        } 
    } 
    int *v2 = malloc(*npares * sizeof(int));

    int j = 0; 
    for(int i = 0 ; i < n ; i ++){ 
        if(v[i] % 2 == 0){ 
            v2[j] = v[i]; 
            j ++; 
        } 
    } 
    return v2; 
}

int main(){ 
    int n , npares; 
    scanf("%d" , &n); 
    int v[n]; 
    for(int i = 0 ; i < n ; i ++){ 
        scanf("%d" , &v[i]); 
    }

    int* v2 = somente_pares(n, v, &npares); 
    for(int i = 0 ; i < npares ; i ++){ 
        printf("%d " , v2[i]); 
    } 
    printf("\n"); 
    free(v2); 
return 0; 
}
