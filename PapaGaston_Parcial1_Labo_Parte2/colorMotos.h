#ifndef COLOR_H_INCLUDED
#define COLOR_H_INCLUDED

#endif // COLOR_H_INCLUDED
typedef struct
{
    int idColor;
    char nombreColor[20];
}eColor;




/** \brief funcion para mostrar un color
 *
 * \param color eColor array de tipo color
 * \return void
 *
 */
void listarColor(eColor color);
/** \brief funcion para mostrar colores
 *
 * \param color[] eColor array de tipo color
 * \param tam int tamaño del array color
 * \return int
 *
 */
int listarColores(eColor color[], int tam);

