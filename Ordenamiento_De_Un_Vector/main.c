#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (i=0;i<cantidad-1;i++)
    {
        for (j=i+1;j<cantidad;j++)
        {
            if (legajo[i]>legajo[j])
            {
                auxiliar = i;
                legajo [i] = legajo [j];
                legajo [j] = auxiliar;
            }
        }
    }
}
