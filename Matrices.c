#include <stdio.h>

int cantidad = 0;
float matrizA[3][3], matrizB[3][3], resultante[3][3]={0};
void llenarmatrices(), summatrices(), detmatrices();

int main(int argc, char *argv[])
{

    llenarmatrices();
    summatrices();
    detmatrices();

    return 0;
}

void llenarmatrices()
{

    printf("========Matriz A==========\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Ingrese el valor Real de la matriz A, posicion %d-%d\n", i, j);
            scanf("%f", &matrizA[i][j]);
        }
    }
    printf("========Matriz B==========\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Ingrese el valor Real de la matriz B, posicion %d-%d\n", i, j);
            scanf("%f", &matrizB[i][j]);
        }
    }
}

void summatrices()
{
    // Reinicializar la matriz resultante a ceros
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            resultante[i][j] = 0;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            resultante[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    printf("SUMA DE MATRICES A+B:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%.2f\t", resultante[i][j]);
        }
        printf("\n");
    }
}

void detmatrices()
{
    // Reinicializar la matriz resultante a ceros
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            resultante[i][j] = 0;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                resultante[i][j] += matrizA[i][k] * matrizB[k][j];
            }
            
        }
        
    }
    printf("MULTIPLICACION DE MATRICES A*B\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%.2f\t", resultante[i][j]);
        }
        printf("\n");
    }
    

}