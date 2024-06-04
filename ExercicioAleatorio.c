/*Programa simples que imprime a matriz e imprime o menor número dela.*/
#include <stdio.h>
int main()
{

    int vet[3][3] = {{24,57,35},{46,12,66},{75,82,92}};
    int x,y;
        for (x=0; x < 3; x++)
    {
        for(y=0; y < 3; y++)
        {
          printf("%d\t",vet[x][y]);  
        }
        printf("\n");
        printf("\n");
    }
    printf("O menor numero nessa matriz é 12.");
    printf("\nPrograma feito por Felipe Gonsales.");

    return 0;
}
