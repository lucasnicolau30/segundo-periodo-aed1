#include <stdio.h> 

void inverte(int n , int *v){ 
    for(int i = 0 ; i < n / 2 ; i ++){ 
        int temp = v[i]; v[i] = v[n - 1 - i]; 
        v[n - 1 - i] = temp; 
    }
}

int main(){ 
    int n; 
    scanf("%d" , &n); 
    int v[n]; 
    for(int i = 0 ; i < n ; i ++){ 
        scanf("%d" , &v[i]); 
    }
    inverte(n , v); 
    for(int i = 0 ; i < n ; i ++){ 
        printf("%d " , v[i]); 
    } 
    printf("\n"); 
    return 0; 
}
