/*
Autor: Erick Felipy
Data: 17/03/2026
Objetivo: Otimizar corte
*/

#include <stdio.h>

int main() {
    
    //Variaveis das Tabuas
    int Tabua3M = 3;
    int Tabua4M = 4;
    int Tabua5M = 5;

    //Converter para centimetros
    int Tab300CM = Tabua3M * 100;
    int Tab400CM = Tabua4M * 100;
    int Tab500CM = Tabua5M * 100;

    //Informar a medida em centimetros
    printf("A tabua de 3 Metros em centimetros equivale a %dcm\n", Tab300CM);
    printf("A tabua de 4 Metros em centimetros equivale a %dcm\n", Tab400CM);
    printf("A tabua de 5 Metros em centimetros equivale a %dcm\n", Tab500CM);
    printf("\n");

    //Cortar em pedações de 45Cm
    int Corte300Cm = Tab300CM / 45;
    int Corte400Cm = Tab400CM / 45;
    int Corte500Cm = Tab500CM / 45;
    //O resto que sobrou após o corte
    int Resto300Cm = Tab300CM % 45;
    int Resto400Cm = Tab400CM % 45;
    int Resto500Cm = Tab500CM % 45;

    //informar os cortes (Quanto deu e quanto sobrou)
    printf("Tabua de 3 Metros\n");
    printf("Quantidade de pedaços: %d\n", Corte300Cm);
    printf("Sobra %dcm de madeira\n", Resto300Cm);
    printf("\n");
    printf("Tabua de 4 Metros\n");
    printf("Quantidade de pedaços: %d\n", Corte400Cm);
    printf("Sobra %dcm de madeira\n", Resto400Cm);
    printf("\n");
    printf("Tabua de 5 Metros\n");
    printf("Quantidade de pedaços: %d\n", Corte500Cm);
    printf("Sobra %dcm de madeira\n", Resto500Cm);
    printf("\n");

    return 0 ;
}

