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


void listarTipo(eTipo tipo)
{

    printf("    %4d      %12s\n", tipo.idTipo ,tipo.descripcionTipo);
}
int listarTipos(eTipo tipo[], int tam)
{
    int error=1;

    if(tipo!= NULL && tam > 0)
    {

        printf("      Id           Tipo \n\n");

        for(int i=0; i<tam; i++)
        {
            listarTipo(tipo[i]);
        }
        error= 0;
    }

    return error;
}

