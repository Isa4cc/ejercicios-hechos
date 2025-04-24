#include <stdio.h>

/*
Escriba un programa que dado un vector de enteros de 10 elementos, muestre el valor máximo y el mínimo.
*/

int main (int argc, char *argv[]) {
    int max = -999, min = 999;
    int vec[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Por favor ingrese el numero %d\n", i);
        fflush(stdin);
        scanf("%d", &vec[i]);
    }
    for (int j = 0; j < 10; j++)
    {
        if (vec[j] > max)
        {
            max = vec[j];
        }
        if (vec[j] < min)
        {
            min = vec[j];
        }
    }
    printf("El valor maximo de la lista es: %d\n", max);
    printf("El valor minimo de la lista es: %d", min);

    return 0;
}