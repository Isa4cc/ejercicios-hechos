#include <stdio.h>

int main(int argc, char *argv[])
{
    int peso[5], val, igualM = 0, promedio = 0, mayorM = 0, menorM = 0;

    for (int i = 0; i < 5; i++)
    {
        do
        {
            printf("Ingrese el peso de la persona %d\n", i);
            printf(">>\t");
            fflush(stdin);
            val = scanf("%d", &peso[i]);
            if (val != 1)
            {
                printf("por favor ingrese un dato correcto..\n");
            }
            if (peso[i] <= 0)
            {
                printf("Por favor ingrese un valor de peso correcto\n");
            }
        } while (val != 1);
        promedio += peso[i];
    }
    promedio = promedio/5;

    for (int i = 0; i < 5; i++)
    {
        if (promedio < peso[i])
        {
            mayorM++;
        }
        if (promedio > peso[i])
        {
            menorM++;
        }
        if (promedio == peso[i])
        {
            igualM++;
        }
        
    }
    
    printf("================================================================\n");
    printf("El promedio de los pesos es: %d\n", promedio);
    printf("La cantidad de personas cuyo peso es mayor a la media es de %d\n", mayorM);
    printf("La cantidad de personas cuyo peso es menor a la media es de %d\n", menorM);
    printf("La cantidad de personas cuyo peso es igual a la media es de %d\n", igualM);
    printf("================================================================\n");

    return 0;
}