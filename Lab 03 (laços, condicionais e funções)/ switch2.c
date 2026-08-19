#include <stdio.h> 

int main(){ 
    int mes , ano; 
    while(scanf("%d %d" , &mes , &ano) , mes != 0 || ano != 0){
        if((ano % 4 == 0 && ano % 100 != 0) || (ano % 4 == 0 && ano % 400 == 0)){ 
            switch(mes){ 
                case 1: 
                    printf("31 \n"); 
                    break; 
                case 2: 
                    printf("29 \n"); 
                    break;
                case 3: 
                    printf("31 \n"); 
                    break; 
                case 4:
                    printf("30 \n"); 
                    break; 
                case 5: 
                    printf("31 \n"); 
                    break;
                case 6: 
                    printf("30 \n"); 
                    break;
                case 7: 
                    printf("31 \n"); 
                    break;
                case 8:
                    printf("31 \n"); 
                    break;
                case 9:
                    printf("30 \n");
                    break; 
                case 10: 
                    printf("31 \n"); 
                    break;
                case 11: 
                    printf("30 \n"); 
                    break; 
                case 12:
                    printf("31 \n"); 
                    break; 
            } 
        }
            else{
                switch(mes){ 
                        case 1: printf("31 \n");
                        break; 
                    case 2: 
                        printf("28 \n"); 
                        break; 
                    case 3: 
                        printf("31 \n"); 
                        break;
                    case 4: 
                        printf("30 \n"); 
                        break;             
                    case 5: 
                        printf("31 \n"); 
                        break; 
                    case 6: 
                        printf("30 \n"); 
                        break; 
                    case 7: 
                        printf("31 \n"); 
                        break; 
                    case 8: 
                        printf("31 \n");
                        break; 
                    case 9: 
                        printf("30 \n"); 
                        break; 
                    case 10: 
                        printf("31 \n");
                        break; 
                    case 11: 
                        printf("30 \n");
                        break; 
                    case 12: 
                        printf("31 \n"); 
                        break; 
                    } 
                } 
        } 
    return 0; 
}
