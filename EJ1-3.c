#include <stdio.h>
int main (int argc, char *argv[]) {    
    float cos[12]={0};// cos[1]=>enero, cos[2]=>febrero...
    float promedioCosechas = 0,mayorCant = -9999;
    int cant1 = 0, maximas;
    for (int i = 0; i < 12; i++)
    {
        printf("Ingrese las toneladas cosechadas en el mes %d\n", i);
        scanf("%f", &cos[i]);
        promedioCosechas += cos[i];
    }
    promedioCosechas /= 12;
    for (int i = 0; i < 12; i++)
    {
        if (cos[i] > promedioCosechas)
        {
            cant1++;
        }
        if (cos[i] > mayorCant)
        {
            mayorCant = cos[i];
            maximas = i;
        } 
    }
    printf("El promedio anual de las cosechas fue de: %f\n", promedioCosechas);
    printf("La cantidad de meses que superaron el promedio anuel es de: %d", cant1);
    printf("El mes que produjo el mayor numero de toneladas fue el mes %d con la cifra de %f toneladas.\n", maximas, mayorCant);   
    return 0;
}