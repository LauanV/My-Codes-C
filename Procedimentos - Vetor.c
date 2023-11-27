#include <stdio.h>
#include <conio.h>

const int tamanho = 5;

void preencherVetor(int vet[], int quantidade){
    //Procedimento para preenchimento do vetor;
    for(int i = 0; i < quantidade; i++){
        scanf("%d", &vet[i]);
    }
}

void imprimirVetor(int vet[], int quantidade){
    //Procedimento para impressão do vetor;
    for(int i = 0; i < quantidade; i++){
        printf("%d ", vet[i]);
    }
}

void somaVetor(int vet1[], int vet2[], int vet3[], int quantidade){
    //Procedimento para somar os dois vetores;
    for(int i = 0; i < quantidade; i++){
        vet3[i] = vet1[i] + vet2[i];
    }
}

void main(){

    int vet1[tamanho], vet2[tamanho], vet3[tamanho];

    printf("Informe os numeros do primeiro vetor:\n");
    preencherVetor (vet1, tamanho); //Chamando o procedimento para preencher o primeiro vetor;
    printf("\nInforme os numeros do segundo vetor:\n");
    preencherVetor (vet2, tamanho); //Chamando o procedimento para preencher o segundo vetor;
    somaVetor (vet1, vet2, vet3, tamanho); //Chamando o procedimento para somar os dois primeiros vetores;

    system("cls"); //Limpando a tela;

    printf("Primeiro vetor informado:\n");
    imprimirVetor (vet1, tamanho); //Chamando o procedimento para imprimir o primeiro vetor;
    printf("\nSegundo vetor informado:\n"); 
    imprimirVetor (vet2, tamanho); //Chamando o procedimento para imprimir o segundo vetor;
    printf("\nVetor soma:\n");
    imprimirVetor (vet3, tamanho); //Chamando o procedimento para imprimir o terceiro vetor (o vetor soma);

    getch();

}