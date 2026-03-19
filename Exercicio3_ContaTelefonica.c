/* 
Autor......: Erick Felipy
Data.......: 16/03/2026
Objetivo...: Conta Telefonica
*/

#include <stdio.h>

int main() {
    
    //Valores fixos
    float assinatura = 17.9;
    float impulsos = 0.04;
    float chamadas = 0.2;
    float interurbanos = 34.29;
    int NumImpulsos = 254;
    int Numchamdas = 23;

    //Valores que dependem de algo
    float ValorImpulsos = (NumImpulsos - 90) * impulsos;
    float ValorChamadas = Numchamdas * chamadas;

    float ValorTotal = assinatura + interurbanos + ValorChamadas + ValorImpulsos;

    printf("O valor da assinatura é de R$%.2f", ValorTotal);


    return 0;
}

