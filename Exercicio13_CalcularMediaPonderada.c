/*
Autor: Erick Felipy
Data: 18/03/2026
Objetivo: Calcular a media ponderada
*/

#include <stdio.h>
int main(){
    //Notas tiradas com seus pesos
    int Nota1 = 8;
    int Nota2 = 7.5 * 2; //Tem o peso de 2
    int Nota3 = 10 * 3; //Tem o peso de 3
    int Nota4 = 9 * 4;

    //Mostrar as notas do aluno
    printf("A nota da primira avaliação é %d\n", Nota1);
    printf("A nota da segunda avaliação é %d\n", Nota2);
    printf("A nota da terceira avaliação é %d\n", Nota3);
    printf("A nota da quarta avaliação é %d\n", Nota4);

    //Mostrar a media
    float Media = (Nota1 + Nota2 + Nota3 + Nota4) / 10;
    printf("A media desse aluno é de %.1f", Media);

}