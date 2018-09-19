#include <stdio.h>
#include <stdlib.h>
#include "persona.h"

#define CANT 2

int main()
{
    char seguir='s';
    int opcion=0;
    int aux;
    EPersona personas[CANT];

    init(personas, CANT);

    do{
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Modificar persona\n");
        printf("4- Imprimir lista ordenada por apellido y nombre\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
               // alta(personas, CANT);
                for (int i=0;i<CANT;i++)
                {
                    printf("Apellido: ");
                    fflush(stdin);
                    scanf("%s",&personas[i].apellido);

                    printf("Nombre: ");
                    fflush(stdin);
                    scanf("%s",&personas[i].nombre);

                    printf("DNI: ");
                    fflush(stdin);
                    scanf("%ld",&personas[i].dni);
                    system("cls");

                  /*  printf("Fecha nacimiento DD/MM/AAAA: ");
                    fflush(stdin);
                    scanf("%d",&personas.[i]);*/

                }
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }while(seguir == 's');

   /* void ordenarLista (int )
     for (i=0;i<CANT-1;i++)
    {
        for (j=i+1;j<CANT;j++)
        {
            if (legajo[i]>legajo[j])
            {
                auxiliar = i;
                legajo [i] = legajo [j];
                legajo [j] = auxiliar;*/
    return 0;
}
