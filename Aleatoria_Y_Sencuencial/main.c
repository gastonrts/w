#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 50
int main()
{
    int   legajo [50],i,isEmpty[50];
    float salario [50];

    for (i=0;i<50;i++)//funcion inicializar{
        isEmpty [i] = 1;
    }

    for (i=0;i<50;i++)//funcion alta{
        if (isEmpty[i]==1){
            printf("Legajo:");
            scanf("%d",&legajo[i]);

            printf("Salario:");
            scanf("%f",&salario[i]);

            isEmpty [i] = 0;
            break;
        }
    }
}
// Si trabajo con arrays paralelos, todos tienen que tener la misma cantidad de elementos
