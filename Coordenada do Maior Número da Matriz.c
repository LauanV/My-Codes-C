#include <stdio.h>
#include <conio.h>

int main(){

    int i, j;
    int linhaMaior, colunaMaior;
    int ordem;

    printf("Informe o tamanho da matriz (quadrada):\n");
    scanf("%d", &ordem);
    
    int matriz[ordem][ordem];

    printf("Informe os numeros da matriz:\n");
    for(i = 0; i < ordem; i++){
        for(j = 0; j < ordem; j ++){
            scanf("%d", &matriz[i][j]);
        }
    }

    system("cls");
    
    printf("\nMatriz informada:\n");
    for(i = 0; i < ordem; i++){
        for(j = 0; j < ordem; j ++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(i = 0; i < ordem; i++){
        linhaMaior = i;
        colunaMaior = 0;
        for(j = 0; j < ordem; j ++){
            if(matriz[linhaMaior][colunaMaior] < matriz[i][j]){
                colunaMaior = j;
            }
        }
        printf("Maior numero da linha %d: (%d, %d).\n", i + 1, linhaMaior + 1, colunaMaior + 1);
    }

    getch();

}