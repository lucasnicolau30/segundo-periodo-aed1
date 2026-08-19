#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

typedef struct{ 
    float raio; 
}Circ; 

typedef struct{ 
    float base , altura; 
}Ret;

Ret* ret_interno(Circ *c , float h){ 
    Ret* ret = malloc(sizeof(Ret)); 
    float diam = 2 * c -> raio; 
    ret -> base = sqrt(diam * diam - h * h); 
    ret -> altura = h; 
    
    return ret; 
} 

Circ* circ_interno(Ret * r){ 
    Circ* circ = (Circ*)malloc(sizeof(Circ));

    if(r -> base < r -> altura) circ -> raio = r -> base / 2; 
    else circ -> raio = r -> altura / 2; 
    
    return circ; 
} 

int main(){ 
    Circ c; Ret r;
    scanf("%f %f %f" , &c.raio , &r.base , &r.altura); 
    
    float h = r.altura; 
    Circ * maiorC = circ_interno(&r); 
    printf("%.2f \n " , maiorC -> raio); 
    
    Ret* maiorR = ret_interno(&c , h); 
    printf("%.2f %.2f \n" , maiorR -> base , maiorR -> altura); 
    
    free(maiorC); 
    free(maiorR); 
    
    return 0; 
}
