#include <stdio.h> 
#include <stdbool.h> 

int main(void){ 
    int numero; 
    scanf("%d" , &numero); 
    printf("char: %lu bytes\n" , sizeof(char));
    printf("short int: %lu bytes\n" , sizeof(short int)); 
    printf("unsigned short int: %lu bytes\n" , sizeof(unsigned short int)); 
    printf("int: %lu bytes\n" sizeof(int))
    printf("long int: %lu bytes\n" , sizeof(long int)); 
    printf("unsigned long int: %lu bytes\n" , sizeof(unsigned long int));
    printf("double: %lu bytes\n" , sizeof(double)); 
    printf("bool: %lu bytes\n" , sizeof(bool)); 
    printf("void: %lu bytes \n" , sizeof(void)); 
    return 0;
}
