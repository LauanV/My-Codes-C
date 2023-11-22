/*Escreva um programa em C que simule o funcionamento de um caixa 
eletrônico. O programa deve ler o valor a ser sacado por cada cliente e 
informar quantas cédulas de cada valor devem ser entregues ao mesmo. O
programa deve sempre priorizar o uso de cédulas maiores. Por exemplo, se o 
cliente deseja fazer um saque de R$ 100,00, o programa deve sugerir uma 
única cédula de R$ 100,00 e não duas cédulas de R$ 50,00. Você deve supor 
que o caixa tem apenas cédulas de R$ 100,00, R$ 50,00, R$ 20,00 e R$ 10,00. 
Caso o usuário informe um valor que não possa ser sacado, o programa deve 
informar para o usuário que é impossível efetuar o saque do valor escolhido. 
Para resolver o programa, você pode supor que o número de cédulas de cada 
valor é infinito. O processo de leitura deve ser encerrado quando o usuário 
informar o valor 0, que não deverá ser processado. Ao terminar o processo de 
leitura, o programa deve informar a soma de todos os saques realizados e 
quantidade de cédulas entregues de cada tipo. Você pode supor que o usuário 
nunca vai informar um valor de saque negativo.*/

#include <stdio.h>
#include <conio.h>

int main(){

    int qtdeSaques = 0, cedula100Total = 0, cedula50Total = 0, cedula20Total = 0, cedula10Total = 0, valorSacar, valorSacado = 0;
    float valorSaque;

    while(valorSaque != 0){

        int cedula100 = 0;
        int cedula50 = 0;
        int cedula20 = 0;
        int cedula10= 0;
        //Zerando os valores das cédulas que serão entregues (necessário caso seja feito no mínimo 1 saque).

        valorSacar = 0;
        //Zerando o valor da var valorSacar para não deixar dados de outro saque.
        valorSacado = 0;


        printf("Informe o valor do saque:\n");
        scanf("%f", &valorSaque);

        if(valorSaque >= 10){

            qtdeSaques = qtdeSaques + 1;
            //Se o valor a ser sacado for maior que R$ 10,00 será realizado o saque, logo a quantidade de saque será somada em +1.
            valorSacar = valorSaque;
            //Atribui o valor do saque à variável 'valorSacar' para que eu possa manipular o valor a ser sacado sem modificar o valor da var 'valorSaque'.

        }

        while(valorSacar >= 100){

            cedula100 = cedula100 + 1;
            cedula100Total = cedula100Total + 1;
            valorSacar = valorSacar - 100;
            valorSacado = valorSacado + 100;

        }

        while(valorSacar >= 50){

            cedula50 = cedula50 + 1;
            cedula50Total = cedula50Total + 1;
            valorSacar = valorSacar - 50;
            valorSacado = valorSacado + 50;

        }

        while(valorSacar >= 20){

            cedula20 = cedula20 + 1;
            cedula20Total = cedula20Total + 1;
            valorSacar = valorSacar - 20;
            valorSacado = valorSacado + 20;

        }

        while(valorSacar >= 10){

            cedula10 = cedula10 + 1;
            cedula10Total = cedula10Total + 1;
            valorSacar = valorSacar - 10;
            valorSacado = valorSacado + 10;

        }

        if(valorSaque > 0 && valorSaque < 10){
        //Se o valor do saque for menor que R$ 10,00 não é realizado o saque e é informado para o usuário.
            printf("\nNao eh possivel sacar R$%.2f.\n\n", valorSaque);
        }

        else if(valorSacar > 0 && valorSacar < 10){
        //Se o resto do valor que já foi sacado for menor que R$ 10,00 esse restante não será sacado, e esse valor que não será sacado vai ser informado ao usuário.
            printf("\nNao eh possivel sacar R$%d,00.\n\n", valorSacar);
        }

        if(valorSacado > 10){
            printf("Foi sacado R$ %d,00. Serao entregues %d notas de R$ 100,00, %d notas de R$ 50,00, %d notas de R$ 20,00 e %d notas de R$ 10,00.\n\n", valorSacado, cedula100, cedula50, cedula20, cedula10);
        }

    }

    printf("\nFoi realizado um total de %d saque(s). Foram sacadas: %d notas de R$ 100,00, %d notas de R$ 50,00, %d notas de R$ 20,00 e %d notas de R$ 10,00.", qtdeSaques, cedula100Total, cedula50Total, cedula20Total, cedula10Total);
    getch();

}