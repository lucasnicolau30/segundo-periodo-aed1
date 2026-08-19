#include <stdio.h> 
int main(void){ 
    int n1 , n2 , n3; 
    scanf("%d" , &n1); 
    scanf("%d" , &n2); 
    scanf("%d" , &n3);

    if(n3 >= n2 && n2 >= n1){ 
        printf("1 \n"); 
        } 
    else{ 
        printf("0 \n"); 
    }

    return 0;
}
