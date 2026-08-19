#include <stdio.h> 

long questao01(long int valor){
     long int x; 
     if(valor < 0){ 
        x = 1; 
    } 
    else{ 
        x = 1;
        for(int i = 1 ; i <= valor * 2 ; i ++){ 
            if(i % 2 == 0){
                 x *= i; 
            } 
        }
    } 
    return x; 
    } 
int main(){ 
    long int valor; 
    scanf("%ld%*c",&valor); 
    printf("%ld\n", 
    questao01(valor)); 
return 0;
}
