/*
  FELIPE OUTEIRAL - Blizard32
  Comision II - 2024
  Programacion 1 - Ingenieria en Computacion
 */

#include <stdio.h>

/**
 * Operacion contador circular
 * 
 * @param i es el numero de inicio
 * @param limite es el final del contador
 * @return devuelve la distancia entre los numeros
 */
int contador_circular(int i, int limite);

/*
   11. Contador circular
 */

int main()
{
    int distancia = contador_circular(12, 12);
    printf("distancia es: %d", distancia);

    return 0;
}

int contador_circular(int i, int limite)
{
    int cont = 0;
    while(i<limite)
    {
        i++;
        cont++;
    }
    return cont;
}