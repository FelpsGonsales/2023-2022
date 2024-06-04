/*Programa que imprime a matriz e o seu maior número, além de dizer onde este número está posicionado. */
#include <stdio.h>

int main()
{
    int vet[3][3] = {{57,24,35},{46,12,66},{75,82,92}};
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
    printf("O maior número nessa matriz é 92.");
    printf("\nEle está localizado na linha %d e na coluna %d.", x,y);
    printf("\nPrograma feito por Felipe Gonsales.");
    
    return 0;
}
