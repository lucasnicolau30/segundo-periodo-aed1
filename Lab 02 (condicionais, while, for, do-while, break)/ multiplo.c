#include <stdio.h> 

int main(){ 
    int n1 , n2; 
    scanf("%d %d" , &n1 , &n2); 
    if(n1 % n2 == 0){ 
        printf("SIM \n"); 
    } 
    else{ 
        printf("NAo \n"); 
    } 
    return 0; 
}
