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

int altaTrabajos(eTrabajo trabajo[], eMoto moto[], eServicio idServicio[], eFecha fecha[], eTipo tipo[],eColor color[], int tam,int tamc, int tamt, int idTrabajo)
{
    int error=1;
    eTrabajo auxTrabajo;
    int index;
    if((moto != && idServicio  && fecha)!= NULL && (tam  && idTrabajo)>0)
    {
        index = buscarLibreTrabajo(trabajo, tam);
        if(index==-1)
        {
            printf("No hay lugar, sistema completo\n");
        }
        else
        {
            auxTrabajo.idTrabajo = idTrabajo;

            auxTrabajo.isEmpty=0;

            mostrarMotos(moto,color,tipo, tam, tamc, tamt);
            printf("Ingrese un ID moto: ");
            scanf("%d", &auxTrabajo.moto.idMoto);

            mostrarServicios(idServicio, tam_t);
            printf("Ingrese id de Servicio: ");
            scanf("%d", &auxTrabajo.servicio.idServicio);

            printf("\n\n");

            printf("Ingrese la fecha (dd/mm/aaaa): ");
            scanf("%d/%d/%d", &auxTrabajo.fecha.dia, &auxTrabajo.fecha.mes, &auxTrabajo.fecha.anio);

            trabajo[index]=auxTrabajo;
            error =0;
        }
    }
    return error;
}

int trabajoLibre(eTrabajo trabajo[], int tam)
{
    int index=-1;
    if(trabajo!=NULL && tam>0)
    {
       for(int i=0; i<tam; i++)
        {
            if(trabajo[i].isEmpty==1)
            {
                index=i;
                break;
            }
        }
    }
    return index;
}

int inicioTrabajo(eTrabajo trabajo[], int tam)
{
    int error=1;

    if(trabajo != NULL && tam > 0)
    {
        for(int i=0; i<tam; i++)
        {
            trabajo[i].isEmpty =1;
        }
        error= 0;
    }
    return error;
}

void listarTrabajo(eTrabajo trabajo,eMoto moto, eServicio servicio[], int tamm, int tams)
{
    char auxServicio[20];
    if(cargarServicios(servicio, auxServicio, trabajo.servicio.idServicio, tams)== 0)
    {
        printf("    %4d     %4d   %20s     %2d/%2d/&2d\n",trabajo.idTrabajo, trabajo.moto.idMoto, auxServicio, trabajo.fecha.dia, trabajo.fecha.mes, trabajo.fecha.anio);
    }
}
int listarTrabajos(eTrabajo trabajo[],eMoto moto[], eServicio servicio[], int tamm, int tams)
{
   int error=1;

    if((trabajo && moto && servicio)!= NULL && (tamm  && tams) > 0)
    {

        printf ("*****************************************************************\n")
        printf("      ID TRABAJO          ID MOTO        SERVICIO       FECHA  \n");

        printf ("*****************************************************************\n");
        for(int i=0; i<tamm; i++)
        {
            listarTrabajo(trabajo[i], moto[i], servicio, tamm, tams);
        }
        error= 0;
    }
    return error;
}


