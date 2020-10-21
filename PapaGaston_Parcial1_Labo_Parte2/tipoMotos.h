#ifndef TIPO_H_INCLUDED
#define TIPO_H_INCLUDED


#endif // TIPO_H_INCLUDED
typedef struct
{
    int idTipo;
    char descripcionTipo[20];
}eTipo;


/** \brief funcion para mostrar tipo
 *
 * \param tipo eTipo array de tipo tipo
 * \return void
 *
 */
void listarTipo(eTipo tipo);
/** \brief funcion para mostrar array de tipos
 *
 * \param tipo[] eTipo array de tipo tipo
 * \param tam int tamaño del array tipo
 * \return int
 *
 */
int listarTipos(eTipo tipo[], int tam);
