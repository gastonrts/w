#include <stdio.h>
#include <stdlib.h>
#define cantidad 50;
 int main ()
 {
    int legajo [10];
    float salario [6];
    int i;

    for (i=0;i<50;i++)
    {
        printf("Legajo");
        scanf("%d",&legajo[i]);

        printf("Salario");
        scanf("%f",&salario[i]); //2.F ES PARA PRINTF NO SCANF
    }

    for (i=0;i<50;i++)
    {
        printf("Legajo:%d\tSalario:%2.f\n",legajo[i],salario[i]);
    }
}
// carga secuencial
//ARRAYS pararalelos : A traves del indice estan relacionados -PUEDEN SER DE DISTINTOS TIPOS-
// la informacion son los DATOS procesados
/*
int nros [5]; //EL PRIMER ELEMENTO DE UN ARRAY S I E M P R E ES CERO 0,1,2,3,4 [5elementos,4numeros]
         nros [0] = 3;
         nros [2] = 7;

     printf("Ingrese...");
     scanf("%d",&nros[2]);
     printf("%d",&nros[2]); //UN ARRAY VA A CONTENER 'K - 1' ELEMENTOS ES DECIR 'TANTA CANTIDAD DE ELEMENTOS CONTENIDOS...


















int utn_getNumero(int* pResultado,
char* mensaje,
char* mensajeError,
int minimo,
int maximo,
int reintentos)
{
int ret;
int num;
while(reintentos>0)
{
printf(mensaje);
scanf("%d",&num);
if(num<=maximo && num>=minimo)
break;
reintentos--;
printf(mensajeError);
}
if(reintentos==0)
{
ret=-1;
}
else
{
ret=0;
*pResultado = num; // si antepongo &-- *operacion de indice
}
return ret;
}

int main ()
{
    int codigo,estado;
    estado = utn_getNumero(&codigo,"Ingrese codigo","Error, codigo incorrecto,1,10000,3");
}
*/
