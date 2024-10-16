/*
  FELIPE OUTEIRAL - Blizard32
  Comision II - 2024
  Programacion 1 - Ingenieria en Computacion
 */

#include <stdio.h>
#include <stdbool.h>

/**
 * Operacion es multiplo
 * 
 * @param numero numero para chequear
 * @param multiplo numero para verificar su multiplicidad
 * @return devuelve si @param multiplo es multiplo o no de @param numero
 *      true si es multiplo
 *      false si NO es multiplo
 */
bool es_multiplo(int numero, int multiplo);

/*
   9. Múltiplos de
 */

int main()
{
    if(es_multiplo(12, 5))
        printf("Es multiplo");
    else
        printf("No es multiplo");

    return 0;
}

bool es_multiplo(int numero, int multiplo)
{
    int sumar = 0;
    bool multiplicidad = false;
    while(sumar<numero)
    {
        sumar = sumar + multiplo;
    }
    if(numero == sumar)
    {
        multiplicidad = true;
    }
    return multiplicidad;
}