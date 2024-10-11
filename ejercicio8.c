/*
  FELIPE OUTEIRAL - Blizard32
  Comision II - 2024
  Programacion 1 - Ingenieria en Computacion
 */

#include <stdio.h>

/**
 * Operacion suma de rango
 * 
 * @param n numero de comienzo
 * @param m numero de llegada
 * @return suma de numeros entre n y m
 * (n=3, m=7 --> return 3+4+5+6) 
 */
int suma_rango(int n, int m);

/*
    8. Suma en rango
 */

int main()
{
    int n = 10;
    int m = 12;
    int suma = suma_rango(n, m);
    printf("La suma entre %d y %d es: %d\n", n, m, suma);
    return 0;
}

int suma_rango(int n, int m)
{
    int suma=0;
    while(n<m)
    {
        suma = suma + n;
        n++;
    }

    return suma;
}