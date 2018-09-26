#include <stdio.h>
#include <stdlib.h>

int main(){
    char dato[15];
    int datoInt;

    printf("Ingrese el dato: ");
    scanf("%s", dato);
    datoInt = atoi(dato);

    printf("\ndatoInt: %d", datoInt+3);

    sprintf(dato,"%d",datoInt+5);

    printf("\ndato: %s", dato);

    return 0;
}
/*typedef struct {
int id;
char descripcion [31]:
int isEmpty;    }eMenu;

typedef struct {
int idEmpleado;
int idManu;
int isEmpty;}eEmpleado;

for (int i=0;i<4;i++)
{
    for (int j = 0;j<4;i++)
    if (empMenu [i].idEmpleado==emp[i].id)

}
//para saber el largo de esto debemos sacar x * x es decir cantidad de prime array por segundo ARRAY; Relacion muchos a muchos
//listar empleados por menu, listar menu de epleados ****

*/
