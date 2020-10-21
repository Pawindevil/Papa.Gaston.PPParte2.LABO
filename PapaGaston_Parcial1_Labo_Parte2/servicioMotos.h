#ifndef SERVICIO_H_INCLUDED
#define SERVICIO_H_INCLUDED

#endif // SERVICIO_H_INCLUDED
typedef struct
{
    int idServicio;
    char descripcionServicio[25];
    int precio;
}eServicio;



/** \brief funcion para mostrar los servicios
 *
 * \param servicio[] eServicio array de tipo servicio
 * \param tam int tamaño del array
 * \return int
 *
 */
int listarServicios(eServicio servicio[], int tam);


/** \brief muestra un servicio
 *
 * \param servicio eServicio array de tipo servicio
 * \return void
 *
 */
void listarServicio(eServicio servicio);
/** \brief carga servicio al programa
 *
 * \param servicio[] eServicio array de tipo servicio
 * \param auxServicio char auxiliar de servicio
 * \param idServicio int el id del servicio
 * \param tams int tamaño del array
 * \return int
 *
 */
int cargarServicios(eServicio servicio[], char auxServicio, int idServicio , int tams);
