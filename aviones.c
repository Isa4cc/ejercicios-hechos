#include <stdio.h>

/*
Una pequeña aerolínea necesita un programa que asigne asientos en
cada vuelo del único avión de la aerolínea (capacidad 20 asientos).
El programa deberá mostrar el siguiente menú de alternativas:
1. Por favor ingrese 1 para "fumadores".
2. Por favor ingrese 2 para "no fumadores".

Si la persona escribe 1, deberá asignarse un asiento en
 la sección de "fumar" (asientos 1 al 10).
Si la persona escribe 2, deberá asignar un asiento en
la sección de "no fumar" (asientos 11 al 20).
*/

int main(int argc, char *argv[])
{
    int cabina[20] = {0}, op, boleto = 0, aux = 0, aux1 = 0;

    do
    {
        printf("\tAEROLINEAS 4 BUSES\n");
        printf("1. Opcion vuelo para fumadores\n");
        printf("2. Opcion vuelo para no fumadores\n");
        printf("3. Salir\n");
        do
        {
            scanf("%d", &op);
            if ((op != 1) && (op != 2) && (op != 3))
            {
                printf("Error! Ingrese una opción correcta..\n");
            }
        } while ((op != 1) && (op != 2) && (op != 3));
        switch (op)
        {
        case 1:
            for (int i = 0; i < 10; i++)
            {
                printf("Buscando un asiento disponible espere por favor..\n");
                if (cabina[i] == 0)
                {
                    printf("Puesto numero %d disponible.\n", i);
                    cabina[i] = 1;
                    printf("BOLETO: Numero de asiento:\t%d", i);
                    aux += 1;
                    break;
                }
                if (aux == 10)
                {
                    printf("Seccion de fumadores llena. Desea ir en clase no fumadora?\n");
                    printf("1. Si\t2. No\n");
                    scanf("%d", &boleto);
                    if (boleto == 1)
                    {
                        printf("Buscando un asiento disponible espere por favor..\n");
                        for (int j = 10; j < 20; i++)
                        {
                            if (cabina[j] == 0)
                            {
                                printf("Puesto numero %d disponible.\n", j);
                                cabina[j] = 1;
                                printf("BOLETO: Numero de asiento:\t%d", j);
                                aux1 += 1;
                                break;
                            }
                        }
                    }
                    else
                    {
                        printf("El siguiente vuelo sale en 3 horas.\n");
                        break;
                    }
                }
            }

            break;

        case 2:
            for (int i = 10; i < 20; i++)
            {
                printf("Buscando un asiento disponible espere por favor..\n");
                if (cabina[i] == 0)
                {
                    printf("Puesto numero %d disponible.\n", i);
                    cabina[i] = 1;
                    printf("BOLETO: Numero de asiento:\t%d", i);
                    aux += 1;
                    break;
                }
                if (aux == 10)
                {
                   printf("No existe algún boleto disponible..\n");
                }
            }

            break;

        default:
            break;
        }
    } while (op != 3);

    return 0;
}