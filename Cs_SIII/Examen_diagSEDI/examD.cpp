

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ImprimirArreglo(int arreglo[], int cant)
{
    for (int i = 0; i < cant; i++)
    {
        printf("%d,\t", arreglo[i]);
    }
}
//

void ContarMayores(int arreglo[], int cant, int size)
{
    int iter = 0, newArray[cant];
    for (int i = 0; i < cant; i++)
    {
        if (arreglo[i] >= size)
        {
            newArray[iter] = arreglo[i];
            iter++;
        }
    }
    ImprimirArreglo(newArray, iter);
}

//

void Sustituir(int arreglo[], int cant, int originalCant, int newCant)
{
    for (int i = 0; i < cant; i++)
    {
        if (arreglo[i] == originalCant)
        {
            arreglo[i] == newCant;
        }
    }
}

void LlenarArreglo(int arreglo[], int cant)
{
    int x;
    //
    int size = 4, originalCant = 30, newCant = 10;

    for (int i = 0; i < cant; i++)
    {
        //srand(time(NULL)); //inicializar el generador de números aleatorios
        //x=rand()%100+1; // rand() - genera un numero aleatorio muy grande
        printf("Cantidad");
        scanf("%d", x);
        arreglo[i] = x;
    }
    //
    ImprimirArreglo(arreglo, cant);

    // Contar mayores e imprimirlos
    ContarMayores(arreglo, size);

    // Sustituir
    Sustituir(arreglo, cant, originalCant, newCant);
}

int main()
{
    const int size = 10;
    int listaX[size];
    // Llenar arreglo y todo lo demas
    LlenarArreglo(listaX, size);

    return 0;
}