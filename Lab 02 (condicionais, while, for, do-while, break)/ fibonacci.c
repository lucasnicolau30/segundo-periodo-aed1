#include <stdio.h> 

int fibonacci (int n){ 
    int a = 0 , b = 1 , termo; 
    if(n == 0){ 
        return 0; 
    } 
    if(n == 1){ 
        return 1; 
    }
    for(int i = 2 ; i <= n ; i ++){ 
        termo = a + b; a = b; b = termo; 
    } return termo; 
    
    }
int main(void){ 
    int n; 
    printf("quantidade de termos da serie: "); 
    scanf("%d",&n); 
    printf("%d \n",fibonacci(n)); 
    return 0; 
}
