#include <stdio.h> 

int main(){ 
    int rep , seg1 , seg2 , segT , acum; 
    scanf("%d" , &rep); acum = 0; 
    scanf("%d" , &seg1);
    for(int i = 0 ; i < rep - 1 ; i ++){
        scanf("%d" , &seg2); 
        segT = seg2 - seg1; seg1 = seg2; 
        if(segT >= 10){ 
            segT = 10;
        }
        acum += segT; 
    } 
    printf("%d \n" , acum + 10); 
return 0; 
}
