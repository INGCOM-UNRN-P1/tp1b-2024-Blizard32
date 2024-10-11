/*
  FELIPE OUTEIRAL - Blizard32
  Comision II - 2024
  Programacion 1 - Ingenieria en Computacion
 */

#include <stdio.h>
#include <stdbool.h>

/**
 * Operacion es primo
 * 
 * @param numero numero al que queremos dividir 
 * @return retorna un booleano:
 *      si es primo retorna "true"
 *      si no es primo retorna "false" 
 */
bool es_primo(int numero);

/*
    7. Números primos
*/

int main()
{
    int num;
    scanf("%d", &num);
    if(numero_primo(num))
        printf("El numero es primo");
    else
        printf("El numero NO es primo");
    return 0;
}

bool es_primo(int numero)
{
    bool retornar = true;
    for(int i=2; i<numero; i++)
    {
        if(numero%i==0)
            retornar = false;
    }
    return retornar;
}