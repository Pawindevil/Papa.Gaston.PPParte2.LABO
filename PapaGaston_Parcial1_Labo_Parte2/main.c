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

#define LLENO -1
#define VACIO 1
#define TamT 4
#define TamC 5
#define TamS 4
#define TamM 3
#define TamCL 10




char menu();
int main()
{
    char seguir = 's';
    char confirma;
    int sigIdMoto=3000;
    int sigIdTrabajo=4000;
    int sigIdCliente=1500;
    int flag=0;
    eTipo tipo[TamT]={{1000,"Enduro"},{1001,"Chopera"},{1002,"Scooter"},{1003,"Ciclomotor"}};
    eColor color[TamC]={{10000,"Gris"},{10001,"Negro"},{10002,"Blanco"},{10003,"Azul"},{10004,"Rojo"}};
    eServicio servicio[TamS]={{20000,"Limpieza",250},{20001,"Ajuste",300},{20002,"Balanceo",17},{20003,"Cadena",190}};
    eMoto moto[TamM];
    eCliente cliente[TamCL];
    eTrabajo trabajo[TamM];
    eFecha fecha[TamM];
    inicio(moto, TamM);
    inicioTrabajo(trabajo, TamM);
    do
    {
        switch(menu())
        {
        case 'a':
            if(altaMotos(moto,color,tipo,cliente, TamM,TamC,TamT,TamCL, sigIdMoto)==0)
            {
                sigIdMoto++;
                sigIdCliente++;
                flag=1;
                printf("Se ha dado de alta\n\n");
            }
            else
            {
                printf("Error...\n");
            }
            break;
        case 'b':

            if(flag==1)
            {
                bajaMotos(moto,color,tipo,TamM,TamC,TamT);
            }else{
                printf("No se dio de alta ninguna moto\n");
            }

            break;
        case 'c':
            if(flag==1)
            {
                modificarMotos(moto, color, tipo, TamC,TamT,TamM);
            }else{
                printf("No se dio de alta ninguna moto\n");
            }
            break;
        case 'd':
            if(flag==1)
            {
               listarMotos(moto,color,tipo,cliente,TamM,TamC,TamT,TamCL);
            }else{
                printf("No se dio de alta ninguna moto\n");
            }
            break;
        case 'e':

            listarServicios(servicio, TamS);
            break;
        case 'f':
            listarTipos(tipo, TamT);
            break;
        case 'g':

            listarColores(color, TamC);
            break;
        case 'h':
            if(flag==1)
            {
                if(altaTrabajos(trabajo, moto, servicio,fecha, tipo,color, TamM,TamC,TamT, sigIdTrabajo)==0)
                {
                    flag=1;
                sigIdTrabajo++;

                printf("Se ha dado de alta\n\n");
                }
            }else
            {
                printf("No hay motos para hacer trabajos\n");

            }

            break;
        case 'i':
            if(flag==1)
            {
                if(listarTrabajos(trabajo, moto, servicio, TamM, TamS)==0)
                {
                sigIdTrabajo++;
                flag=1;
                printf("Se ha dado de alta\n");
                }
            }else
            {
                printf("No hay motos para hacer trabajos\n");

            }
            break;
        case 's':
            printf("Realmente desea salir?: ");
            fflush(stdin);
            scanf("%c", &confirma);
            confirma = tolower(confirma);
            if(confirma == 's')
            {
                seguir = 'n';
            }

            break;
        default:
            printf("Opcion invalida!!!\n");
        }
        system("pause");
    }
    while( seguir == 's');
    return 0;
}

char menu()
{
    char opcion;
    system("cls");

    printf("**********MOTOS************\n");
    printf("a) Alta de Moto            \n");
    printf("b) Baja de moto            \n");
    printf("c) Modificacion de Moto    \n");
    printf("d) Mostrar Motos           \n");
    printf("e) Mostrar Servicios       \n");
    printf("f) Mostrar Tipos           \n");
    printf("g) Mostrar Colores         \n");
    printf("h) Alta de Trabajo         \n");
    printf("i) Mostrar Trabajo         \n");
    printf("s) Salir                   \n");
    printf(" **************************\n");
    printf("Ingrese opcion: ");
    fflush(stdin);
    opcion = tolower(getchar());
    while(opcion != ('a' && 'b' && 'c' & 'd' && 'e' && 'f' && 'g' && 'h' && 'i' && 's'))
    {
        printf("Error, ingrese opcion valida : ");
        fflush(stdin);
        opcion = tolower(getchar());
    }
    return opcion;
}
