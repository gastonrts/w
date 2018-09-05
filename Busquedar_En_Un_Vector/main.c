#include <stdio.h>
#include <stdlib.h>
#define cantidad 50
int main()

{   int i,flag = 0;
    int legajo [50], legajoAux;
    printf ("Ingrese legajo a buscar:");
    scanf ("%d",&legajoAux);

    for (i=0;i<50;i++)
    {
        if (legajoAux==legajo[i])
        {
            printf ("Dato encontrado.");
            flag = 1;
            break; //para romper el for cuando se encuentra el dato
        }
    }
     if (flag==0)
        {
            printf ("No encontrado.");
        }
}
