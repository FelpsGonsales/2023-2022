#include <stdio.h>

int main()
{
    int vet[4][4];
    int x, y, inicio = 0;

    printf("Programa que lê números de matrizes e diz quantos números são maiores que 10.\n");
    printf("Insira os números que quer colocar na matriz 4x4:\n");

    for (x = 0; x < 4; x++)
    {
        for (y = 0; y < 4; y++)
        {
            printf("%d linha na %d coluna = ", x + 1, y + 1);
            scanf("%d", &vet[x][y]);
            if (vet[x][y] > 10)
                inicio++;
        }
    }
    printf("\nEsta é a Matriz:\n");
    for (x = 0; x < 4; x++)
    {
        for (y = 0; y < 4; y++)
        {
            printf("%4d ", vet[x][y]);
        }
        printf("\n");
    }
    printf("\nHá %d números maiores que 10.\n", inicio);
    printf("Programa feito por Felipe Gonsales.\n");

    return 0;
}
