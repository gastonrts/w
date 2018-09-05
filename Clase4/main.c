#include <stdio.h>
#include <stdlib.h>
int validarEdad (int edad);
int main()
{
        int edad;

        if (edad>18&&edad<65)
        {
            validarEdad(&edad);
            printf("Puede trabajar.");
        }
        else
        {   validarEdad(&edad);
            printf("No puede trabajar.");
        }


    return 0;
}


