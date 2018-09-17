#include <stdio.h>
#include <stdlib.h>
#include <string.h>>



typedef struct{
    int dia;
    int mes;
    int anio;
}eFecha; // el nombre de la estructura se declara entre la ultima llave y el ;


typedef struct {
    int legajo;
    char nombre [18];
    char sexo;
    float sueldo;
    eFecha fechaIngreso;
}eEmpleado;


int main()
{


    eEmpleado unEmpleado = {2222,"Jose",'m',20000}; // siguiendo el orden del struct en cada dato

    unEmpleado.fechaIngreso.dia = 17;
    unEmpleado.fechaIngreso.mes = 9;
    unEmpleado.fechaIngreso.anio= 2018;
    mostrarEmpleado(unEmpleado);
    return 0;
}
void mostrarEmpleado (eEmpleado employee) // funcion para mostrar los datos de los empleados.
 {
    printf("%d %s %c %.2f %02d/%02d/%d\n\n",employee.legajo,employee.nombre,employee.sexo,employee.sueldo, employee.fechaIngreso.dia, employee.fechaIngreso.mes, employee.fechaIngreso.anio);
    return employee;

 }
// %d muestra 5, %2d muestra 5 y un espacio vacio a la izquierda, %02d muestra el 5 y un cero a la izquierda
