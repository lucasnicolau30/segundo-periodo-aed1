#include <stdio.h> 

void histograma(int n, float *v, int *h){ 
    for(int i = 0 ; i < 10 ; i ++){ 
        h[i] = 0; 
    } 
    for(int i = 0 ; i < n ; i ++){
        int index = (int)(v[i] * 10); 
        if(index >= 0 && index < 10){ 
            h[index]++; 
        } 
    } 
} 

int main(void){
    int n; 
    scanf("%d" , &n); 
    float v[n]; 
    for(int i = 0 ; i < n ; i ++){ 
        scanf("%f" , &v[i]);
    } 
    int h[10]; 
    histograma(n, v, h); 
    for(int i = 0 ; i < 10 ; i++){ 
        printf("%d " , h[i]); 
    } 
    printf("\n"); 
    return 0; 
}
