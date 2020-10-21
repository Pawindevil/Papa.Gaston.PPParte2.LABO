#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


#include "motos.h"
#include "tipoMotos.h"
#include "servicioMotos.h"
#include "colorMotos.h"
#include "trabajoMotos.h"
#include "fechaTrabajos.h"
#include "clienteMotos.h"


void listarColor(eColor color)
{
    printf("    %5d      %12s\n", color.idColor ,color.nombreColor);
}

int listarColores(eColor color[], int tam)
{
    int error=1;

    if(color!= NULL && tam > 0)
    {

        printf("      Id         Color \n");

        for(int i=0; i<tam; i++)
        {
            listarColor(color[i]);
        }
        error= 0;
    }

    return error;
}

