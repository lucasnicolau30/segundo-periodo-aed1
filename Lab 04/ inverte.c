#include<stdio.h> 

void inverte(char *x , char *y){ 
    char temp; temp = *x; *x = *y; *y = temp; 
}

int main(){ 
    char x, y; 
    scanf("%c %c", &x, &y); 
    inverte(&x, &y); 
    printf("%c%c", x, y); 
return 0; 
}
