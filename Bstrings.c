#include <stdio.h>
#include <string.h>

int tamanomatrizA();
int tamanomatrizB();
void llenarmatrices(int size, int size2, char arregloA[][30], char arregloB[][30]);
void compararmatrices(int size, int size2, char arregloA[][30], char arregloB[][30]);

int main(int argc, char *argv[])
{
    int size, size2;

    size = tamanomatrizA();  // Obtener tamaño de la matriz A
    size2 = tamanomatrizB(); // Obtener tamaño de la matriz B

    char arregloA[size][30], arregloB[size2][30];
    llenarmatrices(size, size2, arregloA, arregloB);
    compararmatrices(size, size2, arregloA, arregloB);

    return 0;
}

int tamanomatrizA()
{
    int size, val;
    do
    {
        printf("Ingrese la cantidad de nombres en la matriz A:\n");
        fflush(stdin);
        val = scanf("%d", &size);
        if (val != 1)
        {
            printf("Ingrese un valor correcto.\n");
        }
        if (size <= 0)
        {
            printf("Por favor, ingrese un número mayor a cero.\n");
        }
    } while (val != 1 || size <= 0);

    return size;
}

int tamanomatrizB()
{
    int size2, val;
    do
    {
        printf("Ingrese la cantidad de nombres en la matriz B:\n");
        fflush(stdin);
        val = scanf("%d", &size2);
        if (val != 1)
        {
            printf("Ingrese un valor correcto.\n");
        }
        if (size2 <= 0)
        {
            printf("Por favor, ingrese un número mayor a cero.\n");
        }
    } while (val != 1 || size2 <= 0);

    return size2;
}

void llenarmatrices(int size, int size2, char arregloA[][30], char arregloB[][30])
{
    int len;
    for (int i = 0; i < size; i++)
    {
        printf("Ingrese el valor %d de la matriz A:\n", i + 1);
        fflush(stdin);
        fgets(arregloA[i], 30, stdin);
        len = strlen(arregloA[i]) - 1;
        arregloA[i][len] = '\0'; // Eliminar el salto de línea
        if (strlen(arregloA[i]) == 0)
        {
            printf("El nombre no puede estar vacío.\n");
            i--;
        }
    }

    for (int i = 0; i < size2; i++)
    {
        printf("Ingrese el valor %d de la matriz B:\n", i + 1);
        fflush(stdin);
        fgets(arregloB[i], 30, stdin);
        len = strlen(arregloB[i]) - 1;
        arregloB[i][len] = '\0'; // Eliminar el salto de línea
        if (strlen(arregloB[i]) == 0)
        {
            printf("El nombre no puede estar vacío.\n");
            i--;
        }
    }
}

void compararmatrices(int size, int size2, char arregloA[][30], char arregloB[][30])
{
    char comunes[size + size2][30]; // Matriz para almacenar elementos comunes
    int contador = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (strcmp(arregloA[i], arregloB[j]) == 0) // Comparar cadenas completas
            {
                strcpy(comunes[contador], arregloA[i]); // Copiar el elemento común
                contador++;
                break; // Salir del bucle interno si se encuentra coincidencia
            }
        }
    }

    // Mostrar los elementos comunes
    if (contador == 0)
    {
        printf("No hay elementos comunes.\n");
    }
    else
    {
        printf("Elementos comunes:\n");
        for (int i = 0; i < contador; i++)
        {
            printf("- %s\n", comunes[i]);
        }
    }
}
