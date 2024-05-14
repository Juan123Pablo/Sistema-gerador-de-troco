#include <stdio.h>
#include <stdlib.h>

int main()
{
    double pago;
    double valor;
    double troco;
    int trocoInteiro;
    int i = 0;
    int notas[6] = {50 , 20, 10 , 5 , 2 , 1 };
    double moedas[5] = {0.50 , 0.25, 0.10 , 0.05, 0.01};
    int trocoNotas;
    double trocoMoedas;
    double centavos;


    printf("Qual o valor a ser pago?:");
    scanf("%lf", &valor);
    printf("Qual o valor efetuado pelo cliente?:");
    scanf("%lf", &pago);
    troco = pago - valor;
    trocoInteiro = troco;
    centavos = troco - trocoInteiro;


    printf("Troco a ser retornado: %.2f\n", troco );


// Notas

    for (i = 0 ; i < 6 ; i++ ){
        trocoNotas = trocoInteiro/notas[i];
        if( trocoNotas >= 1){
            printf("%d Notas de %d\n", trocoNotas , notas[i]);
            trocoInteiro -= trocoNotas * notas[i];
        }
    }


// Moedas

 for (i = 0 ; i < 4 ; i++ ){
        trocoMoedas = centavos/moedas[i];
        if( trocoMoedas >= 1){
            printf("%.f Moedas de %.2f\n", trocoMoedas , moedas[i]);
            centavos -= trocoMoedas *  moedas[i] ;
        }
    }



}
