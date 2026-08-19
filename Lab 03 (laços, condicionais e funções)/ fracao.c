#include <stdio.h> 

float fracao(int a, int b){ 
    return (float)a / b; 
} 
int main(void){ 
    int a , b; 
    scanf("%d %d", &a, &b); 
    float resultado = fracao(a, b); 
    printf("%.4f\n", fracao(a , b)); 
    return 0; 
}
