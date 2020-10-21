#ifndef TRABAJO_H_INCLUDED
#define TRABAJO_H_INCLUDED
#include "motos.h"
#include "servicioMotos.h"
#include "fechaTrabajos.h"
#endif // TRABAJO_H_INCLUDED
typedef struct
{
    int idTrabajo;
    eMoto moto;
    eServicio servicio;
    eFecha fecha;
    int isEmpty;
}eTrabajo;


/** \brief funcion para dar de alta trabajo para moto
 *
 * \param trabajo[] eTrabajo array de tipo trabajo
 * \param moto[] eMoto array de tipo moto
 * \param idServicio[] eServicio array de tipo servicio
 * \param fecha[] eFecha array de tipo fecha
 * \param tipo[] eTipo array de tipo tipo
 * \param color[] eColor array de tipo color
 * \param tam int tamaño array
 * \param tamc int tamaño array color
 * \param tamt int tamaño array tipo
 * \param idTrabajo int id del trabajo
 * \return int
 *
 */
int altaTrabajos(eTrabajo trabajo[], eMoto moto[], eServicio idServicio[], eFecha fecha[], eTipo tipo[],eColor color[], int tam,int tamc, int tamt, int idTrabajo);
/** \brief funcion para buscar espacio
 *
 * \param trabajo[] eTrabajo array de tipo trabajo
 * \param tam int tamaño del array
 * \return int
 *
 */
int trabajoLibre(eTrabajo trabajo[], int tam);
/** \brief  funcion para saber si el sistema esta completo
 *
 * \param trabajo[] eTrabajo array de tipo trabajo
 * \param tam int tamaño del array
 * \return int
 *
 */
int inicioTrabajo(eTrabajo trabajo[], int tam);

/** \brief funcion para mostrar trabajos
 *
 * \param trabajo[] eTrabajo array de tipo trabajo
 * \param moto[] eMoto array de tipo moto
 * \param servicio[] eServicio array de tipo servicio
 * \param tamm int tamaño array moto
 * \param tams int tamaño array servicio
 * \return int
 *
 */
int listarTrabajos(eTrabajo trabajo[],eMoto moto[],eServicio servicio[], int tamm, int tams);

/** \brief funcion para mostrar un trabajo
 *
 * \param trabajo eTrabajo array de tipo trabajo
 * \param moto eMoto array de tipo moto
 * \param servicio[] eServicio array de tipo servicio
 * \param tamm int tamaño array moto
 * \param tams int tamaño array servicio
 * \return void
 *
 */
void listarTrabajo(eTrabajo trabajo,eMoto moto, eServicio servicio[], int tamm, int tams);
