#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*struct eEmpleados //e para estructura
{
    int legajo;
    char nombre [18];
    char sexo;
    float sueldo;
}eEmpleado; //se tiene que terminar con punto y coma*/

typedef struct {
    int legajo;
    char nombre [20];
    char sexo;
    float sueldo;

}eEmpleado;
int main()
{
     // declaracion de variable tipo struct empleado
    eEmpleado unEmpleado;
    eEmpleado otroEmpleado;
    eEmpleado emp3 = {2222,"Jose",'m',20000}; // siguiendo el orden del struct en cada dato
    eEmpleado emp4 = emp3; // se copia los datos del legajo emp3 en el legajo emp3
    eEmpleado emp5;

    unEmpleado.legajo = 1234;
    strcpy (unEmpleado.nombre,"Juan");
    unEmpleado.sexo = 'm';
    unEmpleado.sueldo = 10000.50;

    otroEmpleado.legajo = 5988;
    strcpy (otroEmpleado.nombre,"Pedro");
    otroEmpleado.sexo = 'm';
    otroEmpleado.sueldo = 8880.50;

    printf("Ingrese legajo: ");
    scanf("%d",&emp5.legajo);
    system("cls");

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(emp5.nombre);
    system("cls");

    printf("Ingrese sexo: ");
    fflush(stdin); // despues un printf  para que no use el enter anterior.
    scanf("%c",&emp5.sexo);
    system("cls");

    printf("Ingrese sueldo: ");
    scanf("%f",&emp5.sueldo);
    system("cls");

    mostrarEmpleado(unEmpleado);
    mostrarEmpleado(otroEmpleado);
    mostrarEmpleado(emp3);
    mostrarEmpleado(emp4);
    mostrarEmpleado(emp5);


    return 0;
}

void mostrarEmpleado (eEmpleado employee) // funcion para mostrar los datos de los empleados.
 {
    printf("%d %s %c %.2f\n\n",employee.legajo,employee.nombre,employee.sexo,employee.sueldo);
    return employee;

 }

 //
