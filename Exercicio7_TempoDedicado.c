/*
Autor: Erick Felipy
Data: 16/03/2026
Objetivo: Mostra quanto tempo uma pessoa le por ano
*/

#include <stdio.h>

int main() {
    
    //Variaveis de leitura
    int MinutosDia = 5;
    int DiasSem = 6;

    //Aproximadamente um ano tem 52 semanas
    int Semanas = 52;

    //Calcular o tempo por ano
    int MinAoAno = (MinutosDia * DiasSem) * Semanas;
    float HorasAoAno = MinAoAno / 60;

    printf("Passa %.1f horas lendo\n", HorasAoAno);

    return 0;
}

