#include <stdio.h> 

int main(){ 
    float num , maior = -1.0 , menor = 11.0 , acum = 0.0 , dif , soma; 
    double media; 
    for(int i = 0 ; i < 4 ; i ++){
        scanf("%f" , &num); acum += num; 
        if(maior < num){ 
            maior = num; 
        } 
        if(menor > num){
            menor = num;
        } 
        }
        soma = maior + menor; 
        dif = acum - soma; 
        media = dif / 2; 
        printf("%.2f \n" , media); 
    return 0; 
}
