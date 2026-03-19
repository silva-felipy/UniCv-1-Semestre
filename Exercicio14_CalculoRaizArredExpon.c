/*
Autor: Erick Felipy
Data: 18/03/2026
Objetivo: programa que calcula a raiz de 3, arredonda o resultado e calcula a exponencial do valor resultante
*/

#include <stdio.h>
#include <math.h>

int main(){
    int Num = 3;

    float raiz = sqrt(Num);
    int Arred = round(raiz);
    double expo = exp(Arred);

    printf("%f", expo);
    
    return 0;
}