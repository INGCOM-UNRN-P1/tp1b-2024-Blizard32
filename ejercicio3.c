/*
  FELIPE OUTEIRAL - Blizard32
  Comision II - 2024
  Programacion 1 - Ingenieria en Computacion
 */

#include <stdio.h>


/**
 * Operacion devolucion de signo
 * 
 * @param numero entero para leer el signo
 * @return signo del @param numero:
 *      1 si es positivo
 *      -1 si es negativo
 *      0 si es igual a cero
 */
int signo(int numero);


#define POSITIVO    1
#define NEGATIVO   -1
#define CERO        0

/*
3. Números positivos y negativos
 */

int main()
{
    int num;
    scanf("%d", &num);
    printf("El numero %d es %d\n", num, signo(num));
    return 0;
}


int signo(int numero)
{
    int retornar;
    if(numero > 0)
        retornar = POSITIVO;
    else
        if(numero < 0)
            retornar = NEGATIVO;
        else
            retornar = CERO;
    return retornar;

}