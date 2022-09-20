#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int edad; 
    float sueldo;
    char departamento;

    printf("\n\nA continuacion vamos a pedirle algunos datos personales: \n\n");
    printf("que edad tiene?: ");
    scanf("%d",edad);

    printf("Cual es su sueldo anual?: ");
    scanf("%f",sueldo);

    printf("a que departamento pertnece?: ");
    scanf(" %c",departamento);


    return EXIT_SUCCESS;
}