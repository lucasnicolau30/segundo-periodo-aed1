#include <string.h> 
#include <stdio.h> 

int main(){ 
    char regiao[100]; 
    scanf("%99s" , regiao);
     switch(strlen(regiao)){
        case 5: 
            printf("Acre (AC) \n"); 
            printf("Amapá (AP) \n");
            printf("Amazonas (AM) \n"); 
            printf("Pará (PA) \n"); 
            printf("Rondônia (RO) \n");
            printf("Roraima (RR) \n"); 
            printf("Tocantins (TO) \n"); 
            break; 
        case 7: 
            printf("Espírito Santo (ES) \n"); 
            printf("Minas Gerais (MG) \n");
            printf("Rio de Janeiro (RJ) \n"); 
            printf("São Paulo (SP)\n"); 
            break; 
        case 8: 
            printf("Alagoas (AL) \n"); 
            printf("Bahia (BA) \n");
            printf("Ceará (CE) \n"); 
            printf("Maranhão (MA) \n"); 
            printf("Paraíba (PB) \n"); 
            printf("Pernambuco (PE) \n");
            printf("Piauí (PI) \n"); 
            printf("Rio Grande do Norte (RN) \n"); 
            printf("Sergipe (SE) \n");
            break; 
        case 12: 
            printf("Distrito Federal (DF) \n"); 
            printf("Goiás (GO) \n");
            printf("Mato Grosso (MT) \n");
            printf("Mato Grosso do Sul (MS) \n"); 
            break; 
        case 3:
            printf("Paraná (PR) \n");
            printf("Rio Grande do Sul (RS) \n");
            printf("Santa Catarina (SC) \n"); 
            break; 
        } 
return 0; 
}
