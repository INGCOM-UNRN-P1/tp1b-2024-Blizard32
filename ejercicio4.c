/*
  FELIPE OUTEIRAL - Blizard32
  Comision II - 2024
  Programacion 1 - Ingenieria en Computacion
 */

#include <stdio.h>

#define PRIMER_NUMERO 100
#define SEGUNDO_NUMERO 15

#define IGUAL 0
#define MENOR -1
#define MAYOR 1

/**
 * Operacion comparacion de numeros
 * 
 * @param numero primer entero 
 * @param otro_numero segundo entero
 * @return comparacion de ambos numeros sindo:
 *      1 si @param numero es MAYOR
 *      -1 si @param numero es MENOR
 *      0 si son IGUALES
 */
int compara(int numero, int otro_numero);

/*
 4. Comparación de números
*/

int main()
{
   int num1 = PRIMER_NUMERO;
   int num2 = SEGUNDO_NUMERO;
   printf("%d (primero: %d - segundo: %d)\n", compara(num1, num2), num1, num2);
   return 0;
}

int compara(int numero, int otro_numero)
{
    int retornar;
    if(numero > otro_numero)
        retornar = MAYOR;
    else
        if(numero < otro_numero)
            retornar = MENOR;
        else
            retornar = IGUAL;
    return retornar;
}