/*
Autor: Erick Felipy
Data: 18/03/2026
Objetivo: Calcular as funções matematicas
*/

#include <stdio.h>
#include <math.h>

int main() {
    //Números utilizados para responder
    int Raiz = 169;
    int Poten = 17;
    int Cosse = 0;
    float Arred = 1.65;

    //Formulas para responder
    int FormRaiz = sqrt(Raiz);
    printf("A raiz quadrada de 169 é %2d\n", FormRaiz); //Raiz de 169 é 13
    
    int FormExpo = pow(Poten, 2);
    printf("17 elevado a 2 é igual a %d\n", FormExpo); // 17 * 17 é igual a 289
    
    int FormCos = cos(Cosse);
    printf("O cosseno de 0 é %d\n", FormCos);
    
    int FormArred = round(Arred);
    printf("1,65 arredondado fica %d\n", FormArred);//Como 1,65 vem depois de 1,5; Ele é arredondado para 2

    return 0;
}

