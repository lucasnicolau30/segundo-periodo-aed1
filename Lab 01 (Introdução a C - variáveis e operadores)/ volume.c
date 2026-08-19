#include <stdio.h> 

int main(){ 
    int r; 
    float volume; 
    scanf("%d" , &r); 
    volume = (4 * r * r * r * 3.14f)/3; 
    printf("%.2f \n" , volume); 
    return 0;
}
