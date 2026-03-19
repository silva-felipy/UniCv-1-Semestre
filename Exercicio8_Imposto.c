/*
Autor: Erick Felipy
Data: 17/03/2026
Objetivo: Quanto pagara de Imposto
*/

#include <stdio.h>

int main() {
    
    //Pedindo o valor para a pessoa
    int Valor;
    printf("Qual o valor?\n");
    scanf("%d", &Valor);


    if (Valor <= 1200)
    {
        printf("Você é Isento de Impostos\n"); 
    }
    else if (Valor >= 1201 &&  Valor <= 5000)
    {
        printf("Você pagara 10 porcento de imposto\n");
        float Impos10 = Valor * 0.1;
        printf("Seu imposto será de R$%.2f\n", Impos10);
    }
    else if (Valor >= 5001 && Valor <= 10000)
    {
        printf("Você pagara 15 porcento de imposto\n");
        float Impos15 = Valor * 0.15;
        printf("Seu imposto será de R$%.2f\n", Impos15);
    }
    else if (Valor > 10000)
    {
        printf("Você pagara 20 porcento de imposto\n");
        float Impos20 = Valor * 0.2;
        printf("Seu imposto será de R$%.2f\n", Impos20);
    }
    
    return 0;
    
}

