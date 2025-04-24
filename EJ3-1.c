#include <stdio.h>

/*
elaborar un programa que sume y escriba el contenido de
los primeros n elementos de un arreglo ingresados por el user,
el dato n debe ser menor a 300 además.
*/

int main(int argc, char *argv[])
{
    int defin = 0;
    int arrayer[defin];
    int aux;

    do
    {
        printf("Por favor ingrese la cantidad de elementos de su vector..\n");
        fflush(stdin);
        aux = scanf("%d", &defin);
        if (aux != 1)
        {
            printf("Por favor ingrese un caracter valido..\n");
        }
        
    } while (aux != 1);

    for (int i = 0; i < defin+1; i++)
    {

        do
        {
            printf("Por favor ingrese el valor %d de su arreglo:\n", i);
            fflush(stdin);
            aux = scanf("%d", &arrayer[i]);
            if (aux != 1)
            {
                printf("Por favor ingrese un caracter valido..\n");
            }
        } while (aux != 1);
        do
        {
            if (arrayer[i] > 300)
            {
                printf("No se puede almacenar numeros mayores a 30, intente otra vez\n");
            }
        } while (arrayer[i] > 300);
        printf("El numero es: %d\n", arrayer[i]);
    }

    return 0;
}