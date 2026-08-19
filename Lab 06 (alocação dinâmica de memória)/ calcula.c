#include <stdio.h> 
#include <stdlib.h> 

float calcula(int n , float * x1 , char * x2){ 
    float x3 = x1[0]; 
    for(int i = 0 ; i < n - 1 ; i ++){
        switch(x2[i]){ 
            case '+': 
            x3 += x1[i + 1]; 
            break; 
            case '-': 
            x3 -= x1[i + 1]; 
            break; 
            case '*': 
            x3 *= x1[i + 1]; 
            break; 
            case '/': 
            x3 /= x1[i + 1]; 
            break;
        } 
    } 
    return x3; 
} 

int main(){ 
    int n; 
    scanf("%d" , &n);
    float * x1 = malloc(n * sizeof(float)); 
    char * x2 = malloc((n - 1) * sizeof(char)); 
    for(int i = 0 ; i < n ; i ++){ 
        scanf("%f" , &x1[i]); 
    }
    for(int i = 0 ; i < n - 1 ; i ++){ 
        scanf(" %c" , &x2[i]); 
    } 
    float x3 = calcula(n , x1 , x2); 
    printf("%.2f \n" , x3); 
    return 0; 
}
