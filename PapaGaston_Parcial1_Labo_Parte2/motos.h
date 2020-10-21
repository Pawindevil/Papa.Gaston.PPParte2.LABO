#ifndef ALTAMOTOS_H_INCLUDED
#define ALTAMOTOS_H_INCLUDED
#include "colorMotos.h"
#include "tipoMotos.h"
#include "clienteMotos.h"

#endif // ALTAMOTOS_H_INCLUDED
typedef struct
{
    int idMoto;
    char marca[20];
    eTipo tipo;
    eCliente cliente;
    eColor color;
    int isEmpty;
    int cilindrada;
}eMoto;


/** \brief funcion para dar de alta motos
 *
 * \param moto[] eMoto array de tipo moto
 * \param color[] eColor array de tipo color
 * \param tipo[] eTipo array de tipo tipo
 * \param tam int tamaño de array moto
 * \param tamc int tamaño de array color
 * \param tamt int tamaño de array tipo
 * \param idMoto int id de la moto
 * \return int
 *
 */
int altaMotos(eMoto moto[], eColor color[], eTipo tipo[],eCliente cliente[], int tam, int tamc, int tamt,int tamCL, int idMoto);

/** \brief funcion para buscar espacio
 *
 * \param moto[] eMoto array de tipo moto
 * \param tam int tamaño array
 * \return int
 *
 */
int buscarLibre(eMoto moto[], int tam);

/** \brief funcion para saber si el sistema esta completo
 *
 * \param moto[] eMoto array de tipo moto
 * \param tam int tamaño array
 * \return int devuelve -1 si esta lleno o 1 si hay espacio
 *
 */
int inicio(eMoto moto[], int tam);

/** \brief funcion para mostrar motos
 *
 * \param moto[] eMoto array de tipo moto
 * \param color[] eColor array de tipo color
 * \param tipo[] eTipo array de tipo tipo
 * \param tam int tamaño de array
 * \param tamc int tamaño array color
 * \param tamt int tamaño array tipo
 * \return int
 *
 */
int listarMotos(eMoto moto[],eColor color[], eTipo tipo[],eCliente cliente[], int tam, int tamc, int tamt,int tamCL);


/** \brief funcion para mostrar una moto
 *
 * \param moto eMoto array de tipo moto
 * \param tipo[] eTipo array de tipo tipo
 * \param color[] eColor array de tipo color
 * \param tamc int tamaño array color
 * \param tamt int tamaño array tipo
 * \return void
 *
 */
void listarMoto(eMoto moto, eTipo tipo[], eColor color[],eCliente cliente[], int tamc, int tamt, int tamCL);

/** \brief funcion para cargar tipo y color
 *
 * \param tipo[] eTipo array de tipo tipo
 * \param color[] eColor array de tipo color
 * \param auxColor[] char auxiliar de color
 * \param auxTipo[] char auxiliar de tipo
 * \param idColor int id de color
 * \param idTipo int id de tipo
 * \param tamc int tamaño de array color
 * \param tamt int tamaño de array tipo
 * \return int
 *
 */
int tipoColor( eTipo tipo[], eColor color[], char auxColor[], char auxTipo[], int idColor, int idTipo, int tamc, int tamt);

/** \brief funcion para modificar algun parametro del array
 *
 * \param moto[] eMoto array de tipo moto
 * \param color[] eColor array de tipo color
 * \param tipo[] eTipo array de tipo tipo
 * \param tamc int tamaño array color
 * \param tamt int tamaño array tipo
 * \param tamm int tamaño array moto
 * \return int
 *
 */
int modificarMotos(eMoto moto[],eColor color[],eTipo tipo[], int tamc,int tamt, int tamm);
/** \brief funcion para dar de baja motos
 *
 * \param moto[] eMoto array de tipo moto
 * \param color[] eColor array de tipo color
 * \param tipo[] eTipo array de tipo tipo
 * \param tamm int tamaño array moto
 * \param tamc int tamaño array color
 * \param tamt int tamaño array tipo
 * \return int
 *
 */
int bajaMotos(eMoto moto[],eColor color[], eTipo tipo[], int tamm, int tamc, int tamt);
/** \brief funcion para buscar moto por id para dar de baja o modificar
 *
 * \param moto[] eMoto array de tipo moto
 * \param tam int tamaño del array
 * \param id int id moto
 * \return int
 *
 */
int buscarMotos(eMoto moto[], int tam, int id);
