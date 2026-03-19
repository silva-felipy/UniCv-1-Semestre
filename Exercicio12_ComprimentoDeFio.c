/*
Autor: Erick Felipy
Data: 18/03/2026
Objetivo: Calcular o Dimetro de um Retangulo utilizando Pitagoras
*/

#include <stdio.h>
#include <math.h>

int main() {
    //Variaveis
    float CatA = 11.5;
    float CatB = 6.3;

    //Elevando elas
    int CatetA = pow(CatA, 2); //11,5^2 é igual a 132,25
    int CatetB = pow(CatB, 2); //6,3^2 é igual a 39,69

    //Descobrindo a Diagonal
    double Hip = sqrt((CatetA + CatetB)); //132,25 + 39,69 = 171,94; Raiz de 171,94 é aproximadamente 13,11 ou 13,1
    printf("A medida da diagonal é %.1f", Hip);




    return 0;
}

