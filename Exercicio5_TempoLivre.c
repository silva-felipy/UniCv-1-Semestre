/*
Autor: Erick Felipy
Data: 16/03/2026
Objetivo: Calcular o tempo livre e o dedicado a cada disciplina
*/

#include <stdio.h>

int main() {
    
    //Tempo que ele tem
    int Horas = 1;
    int Min = 40;
    int TotalMin = (Horas * 60) + Min;

    //Numero de disciplinas
    int NumDisc = 6;

    //Descobrir o tempo para cada disciplina e quanto sobra
    int TempIgual = TotalMin / NumDisc;
    int TempRest = TotalMin % NumDisc;



    //Informar as coisas
    printf("Tempo total de estudo: %d\n", TotalMin);
    printf("Tempo para cada disciplina: %d\n", TempIgual);
    printf("Tempo livre para descanso: %d\n", TempRest);


    return 0;
    
}

