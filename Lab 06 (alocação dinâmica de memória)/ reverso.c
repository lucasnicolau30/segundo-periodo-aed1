#include <stdio.h> 
#include <stdlib.h> 

float* reverso(int n, float* v){ 
    float *v2 = malloc(n * sizeof(int)); 
    for(int i = 0 ; i < n ; i ++){
        v2[i] = v[n - 1 - i]; 
    } 
    return v2; 
} 

int main(){ 
    int n; 
    scanf("%d" , &n);
    float v[n]; 
    for(int i = 0 ; i < n ; i ++){ 
        scanf("%f" , &v[i]); 
    } 

    float *v2 = reverso(n, v); 

    for(int i = 0 ; i < n ; i ++){
        printf("%.2f " , v2[i]); 
    } 
    printf("\n"); 
    free(v2); 
    return 0; 
}
