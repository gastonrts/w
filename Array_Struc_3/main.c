#include <stdio.h>
#include <stdlib.h>
#define TAM 5
//array de estructuras para mostrar legajo, nombre, sexo y sueldo con una funcion


typedef struct {
    int legajo;
    char nombre [18];
    char sexo;
    float sueldo;
   // eFecha fechaIngreso;
}eEmpleado;


int main()
{
    eEmpleado empleados []={
        {1234,"Juan",'m',20000},
        {2232,"Lujan",'f',292929},
        {1233,"Juan",'m',22222},
        {2222,"Pedro",'f',20202},
        {233,"Ana",'f',2333}
        };
//    eEmpleado empleados [TAM];
    /*for (int i = 0;i<TAM;i++)
    {
           printf("Ingrese legajo: ");
    scanf("%d",&empleados[i].legajo);
    system("cls");

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(empleados[i].nombre);
    system("cls");

    printf("Ingrese sexo: ");
    fflush(stdin); // despues un printf  para que no use el enter anterior.
    scanf("%c",&empleados[i].sexo);
    system("cls");

    printf("Ingrese sueldo: ");
    scanf("%f",&empleados[i].sueldo);
    system("cls");*/


    mostrarEmpleados(empleados, TAM);

    return 0;
}


void mostrarEmpleado (eEmpleado employee) // funcion para mostrar los datos de los empleados.
 {
    printf("%d %s %c %.2f\n\n",employee.legajo,employee.nombre,employee.sexo,employee.sueldo);
    return employee;

 }

void mostrarEmpleados (eEmpleado lista [], int tam)
    {
        for (int i = 0;i<tam;i++)
        {
            mostrarEmpleado(lista[i]);
        }
    }

void ordenarEmpleado (eEmpleado listo [],int tam)
{
    eEmpleado auxEmpleado

    for(int i=0;i<tam;)
}
