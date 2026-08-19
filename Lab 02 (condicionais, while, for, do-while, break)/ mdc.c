#include <stdio.h> 

int main(){ 
    int m , n , temp; 
    scanf("%d %d" , &m , &n); 
    while(n != 0){ 
        temp = n; n = m % n; m = temp; 
    } 
    printf("%d \n" , m); 
    return 0;
}        
