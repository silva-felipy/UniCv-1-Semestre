/*
Autor: Erick Felipy
Data: 16/03/2026
Objetivo: Mostra a media de cada disciplina
*/

#include <stdio.h>

int main() {
    
    //Declaração de variaveis
    int Geo1;
    int Geo2;
    int Geo3;
    int Geo4;
    int His1;
    int His2;
    int His3;
    int His4;
    int Ing1;
    int Ing2;
    int Ing3;
    int Ing4;
    int Mat1;
    int Mat2;
    int Mat3;
    int Mat4;
    int Por1;
    int Por2;
    int Por3;
    int Por4;

    //Informando os valores 
    printf("Quais são suas notas em Geografia?\n");
    scanf("%d %d %d %d", &Geo1, &Geo2, &Geo3, &Geo4);

    printf("Quais são suas notas em Historia?\n");
    scanf("%d %d %d %d", &His1, &His2, &His3, &His4);

    printf("Quais são suas notas em Ingles?\n");
    scanf("%d %d %d %d", &Ing1, &Ing2, &Ing3, &Ing4);

    printf("Quais são as suas notas em Matematica?\n");
    scanf("%d %d %d %d", &Mat1, &Mat2, &Mat3, &Mat4);

    printf("Quais são as suas notas em Portugues\n");
    scanf("%d %d %d %d", &Por1, &Por2, &Por3, &Por4);


    //Fazendo a conta da media
    float MediaGeo = (Geo1 + Geo2 + Geo3 + Geo4) / 4;
    float MediaHis = (His1 + His2 + His3 + His4) / 4;
    float MediaIng = (Ing1 + Ing2 + Ing3 + Ing4) / 4;
    float MediaMat = (Mat1 + Mat2 + Mat3 + Mat4) / 4;
    float MediaPor = (Por1 + Por2 + Por3 + Por4) / 4;

    printf("+----------------------------------+\n");
    printf("|        Suas Medias Foram         |\n");
    printf("+------------------------+---------+\n");
    printf("| Medias de Geografia    |  %.2f   |\n", MediaGeo);
    printf("+------------------------+---------+\n");
    printf("| Medias de Historia     |  %.2f   |\n", MediaHis);
    printf("+------------------------+---------+\n"); 
    printf("| Medias de Ingles       |  %.2f   |\n", MediaIng);
    printf("+------------------------+---------+\n"); 
    printf("| Medias de Matematica   |  %.2f   |\n", MediaMat);
    printf("+------------------------+---------+\n"); 
    printf("| Medias de Portugues    |  %.2f   |\n", MediaPor);
    printf("+------------------------+---------+\n"); 



    return 0;
}

