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

int altaMotos(eMoto moto[], eColor color[], eTipo tipo[],eCliente cliente[], int tam, int tamc, int tamt,int tamCL, int idMoto)
{
    int error=1;
    eMoto auxMoto;
    int index;


    if((moto  && color  && tipo)!= NULL && (tam  && tamc  &&  tamt && idMoto %% tamCL)>0)
    {
        index = buscarLibre(moto, tam);
        if(index==-1)
        {
            printf("Sistema completo\n");
        }
        else
        {
            auxMoto.idMoto = idMoto;

            auxMoto.isEmpty=0;
            printf("Ingrese Marca: ");
            fflush(stdin);
            gets(auxMoto.marca);

            printf("Ingrese Nombre cliente: ");
            fflush(stdin);
            gets(auxMoto.cliente.nombre);

            listarColores(color, tamc);
            printf("Ingrese un id de color (10000 a 10004): ");
            scanf("%d", &auxMoto.color.idColor);
            while(auxMoto.color.idColor < 10000 || auxMoto.color.idColor>10004)
            {
                printf("Error, ingrese id de Color(10000 a 10004): ");
                scanf("%d", &auxMoto.color.idColor);
            }


            listarTipos(tipo, tamt);
            printf("Ingrese id Tipo (1000 a 1003): ");
            scanf("%d", &auxMoto.tipo.idTipo);
            while(auxMoto.tipo.idTipo < 1000 || auxMoto.tipo.idTipo>1003)
            {
                printf("Error, ingrese id de Tipo (1000 a 1003): ");
                scanf("%d", &auxMoto.tipo.idTipo);
            }




            printf("Ingrese una cilindrada(50, 125, 500, 600, 750): ");
            scanf("%d", &auxMoto.cilindrada);
            while(auxMoto.cilindrada!= 50 && auxMoto.cilindrada != 125 && auxMoto.cilindrada != 500 && auxaMoto.cilindrada != 600 && auxMoto.cilindrada != 750)
            {
                printf("Error, ingrese una cilindrada valida(50, 125, 500, 600, 750): ");
                scanf("%d", &auxMoto.cilindrada);
            }


            moto[index]=auxMoto;
            error =0;

        }
    }
    return error;
}

int buscarLibre(eMoto moto[], int tam)
{
    int index=-1;
    if(moto!=NULL && tam>0)
    {
       for(int i=0; i<tam; i++)
        {
            if(moto[i].isEmpty==1)
            {
                index=i;
                break;
            }
        }
    }

    return indice;
}

int inicio(eMoto moto[], int tam)
{
    int error=1;

    if(moto != NULL && tam > 0)
    {
        for(int i=0; i<tam; i++)
        {
            moto[i].isEmpty =1;
        }
        error= 0;
    }
    return error;
}

int listarMotos(eMoto moto[],eColor color[], eTipo tipo[],eCliente cliente[], int tam, int tamc, int tamt,int tamCL)
{
   int error=1;

    if(moto!= NULL && tam > 0)
    {

        printf("      Id             Marca        Color        Tipo     Cilindrada       Cliente \n\n");


        for(int i=0; i<tam; i++)
        {
            listarMoto(moto[i], tipo, color,cliente, tamc, tamt,tamCL);
        }
        error= 0;
    }
    return error;
}
int tipoColor( eTipo tipo[], eColor color[], eCliente cliente[], char auxColor[], char auxTipo[], char auxCliente[], int idColor, int idTipo,int idCliente, int tamc, int tamt,int tamCL)
{
    int error=1;

        for(int i=0;i<tamc;i++)
        {
            if(idColor==color[i].idColor)
            {
                strcpy(auxColor, color[i].nombreColor);
                error=0;

            }
        }

        for(int i=0;i<tamt;i++)
        {
            if(idTipo==tipo[i].idTipo)
            {
                strcpy(auxTipo, tipo[i].descripcionTipo);
                error=0;

            }
        }
        for(int i=0;i<tamCL;i++)
        {
            if(idCliente==cliente[i].id)
            {
                strcpy(auxCliente,cliente[i].nombre);
                error=0;

            }
        }
    return error;
}
void listarMoto(eMoto moto, eTipo tipo[], eColor color[],eCliente cliente[], int tamc, int tamt, int tamCL)
{
        char auxColor[15];
        char auxTipo[15];
        char auxCliente[15];

        if(tipoColor(tipo, color,cliente, auxColor, auxTipo,auxCliente, moto.color.idColor, moto.tipo.idTipo,moto.cliente.id, tamc, tamt,tamCL)==0)
        {
            printf("    %5d      %12s   %15s   %15s     %3d      %10s\n", moto.idMoto ,moto.marca, auxColor, auxTipo,moto.cilindrada, moto.auxCliente);
        }else
        {
        printf("Error\n");
        }

}



int modificarMotos(eMoto moto[],eColor color[],eTipo tipo[], int tamc,int tamt, int tamm)
{
    int error=1;
    int index;
    int id;
    char confirmacion;
    char modificar;

    if(moto !=NULL && tamm >0)
    {
        system("cls");
        printf("  \n ************** Modificacion **************\n");
        mostrarMotos(moto, color, tipo, tamm, tamc, tamt);
        printf("Ingrese id Moto: ");
        scanf("%d", &id);
        while(id<3000)
        {
            printf("Error, ingrese id de Moto: ");
            scanf("%d", &id);
        }
        index = buscarMotos(moto, tamm, id);

        if(index==-1)
        {
            printf("No se pudo encontrar el id\n\n");
        }
        else
        {
            printf("a Color\n");
            printf("b Cilindrada\n");
            printf("Que desea modificiar?: ");
            fflush(stdin);
            scanf("%c", &modificar);
            modificar = tolower(modificar);
            while(modificar != 'a' && modificar != 'b')
            {
                printf("a Color\n");
                printf("b Cilindrada\n");
                printf("Ingrese una opcion valida, que desea modificiar?: ");
                fflush(stdin);
                scanf("%c", &modificar);
                modificar = tolower(modificar);
            }



            switch(modificar)
            {
            case 'a':
                mostrarColores(color, tamc);
                printf("Ingrese id de Color(10000 a 10004): ");
                scanf("%d", &moto[index].color.idColor);

                while(moto[index].color.idColor < 10000 || moto[index].color.idColor>10004)
                {
                    printf("Error, ingrese id de Color(10000 a 10004): ");
                    scanf("%d", &moto[index].color.idColor);
                }
                break;

            case 'b':
                printf("Ingrese una nueva cilindrada(50, 125, 500, 600, 750): ");
                scanf("%d", &moto[index].cilindrada);
                while(moto[index].cilindrada!= 50 && moto[index].cilindrada != 125 && moto[index].cilindrada != 500 && moto[index].cilindrada != 600 && moto[index].cilindrada != 750)
                {
                    printf("Error, ingrese una cilindrada valida(50, 125, 500, 600, 750): ");
                    scanf("%d", &moto[index].cilindrada);
                }
                break;
            }
            printf("Desea confirmar el cambio?(s/Si n/No): ");
            fflush(stdin);
            scanf("%c", &confirmacion);
            while(confirmar!='s' && confirmacion!='n')
            {
                printf("Error, confirmar el cambio?(s=Si o n=No): ");
                fflush(stdin);
                scanf("%c", &confirmacion);
                confirmar = tolower(confirmar);
            }
            if(confirmacion=='s')
            {
                error=0;
            }
            else
            {
                error=1;
            }
        }
    }
    return error;
}

int buscarMotos(eMoto moto[], int tam, int id)
{
    int index;

    for(int i=0; i<tam; i++)
    {
        if(moto[i].idMoto==id&&moto[i].isEmpty==0)
        {
            index=i;
            break;
        }
        else
        {
            index= -1;
        }
    }
    return index;
}

int bajaMotos(eMoto moto[],eColor color[], eTipo tipo[], int tamm, int tamc, int tamt)
{
    int error=1;
    int index;
    int id;
    char confirmacion;

    if((moto  && color  && tipo)!= NULL && (tamm  &&  tamc  && tamt)>0)
    {

        printf ("******************************************\n");
        printf("                  Baja             \n");
        printf ("******************************************\n");
        mostrarMotos(moto, color, tipo, tamm,tamc,tamt);
        printf("Ingrese id de moto: ");
        scanf("%d", &id);
        while(id<3000)
        {
            printf("Error, ingrese id Moto: ");
            scanf("%d", &id);
        }
        index = buscarMotos(moto, tamm, id);

        if(indice==-1)
        {
            printf("No se encontro id\n");
        }
        else
        {
            listarMoto(moto[index], tipo, color, tamc,tamt);
            printf("Confirma eliminar a la Moto?: ");
            fflush(stdin);
            scanf("%c", &confirmacion);
            confirmacion = tolower(confirmacion);
            if(confirmacion=='s')
            {
                moto[index].isEmpty=1;
                printf("\n Se ha dado de baja\n");
                error=0;
            }
            else
            {
                error=2;
            }
        }
    }
    return error;
}
