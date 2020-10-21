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


void listarServicio(eServicio servicio)
{
    printf("    %5d       %10s        %3d\n", servicio.idServicio ,servicio.descripcionServicio, servicio.precio);
}
int cargarServicios(eServicio servicio[], char auxServicio, int idServicio , int tams)
{
    int error=1;

        for(int i=0;i<tams;i++)
        {
            if(idServicio==servicio[i].idServicio)
            {
                strcpy(auxServicio, servicio[i].descripcionServicio);
                error=0;
            }
        }
    return error;
}

int listarServicios(eServicio servicio[], int tam)
{
   int error=1;

    if(servicio!= NULL && tam > 0)
    {
        printf(" \n*************************************\n");
        printf("      Id        Servicio     Precio  ");

        for(int i=0; i<tam; i++)
        {
            listarServicio(servicio[i]);
        }
        error= 0;
    }
    return error;
}

