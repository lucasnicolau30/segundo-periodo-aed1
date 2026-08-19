#include <stdio.h> 

int main(void){ 
    double milha , km;
    scanf("%le" , &milha); 
    km = milha * 1.609f; 
    printf("%.2f \n" , km);
    return 0;
}    
