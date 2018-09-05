#include <stdio.h>
#include <stdlib.h>

int main()
{
  #include <stdio.h>
void main(void)
{
int v[5],pos,i;
char seguir;
for(i=0;i<5;i++)
v[i]=0; // inicializamos vector A TODOS LOS NUMEROS DEL VECTOR LE ASIGNA 0
do
{
printf("Ingrese posici¢n");
scanf("%d",&pos);
printf("Ingrese valor a cargar en el vector");
scanf("%d",&v[pos]);
printf("Desea ingresar otro dato S/N?");
scanf("%c",&seguir);
}while(seguir=='s');
}
}
