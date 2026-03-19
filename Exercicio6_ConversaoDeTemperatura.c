/*
Autor: Erick Felipy
Data: 16/03/2026
Objetivo: Mostra atemperatura em Farenhait e Celsius
*/

#include <stdio.h>

int main() {
    
    //Calculos

    printf("+-----------------------------------+\n"); 
    printf("|         Farenhait/Celsius         |\n");
    printf("+-----------------------------------+\n"); 
    printf("|  1°Farenhait   | %.2f°Celsius   |\n", (1 - 32) * (5.0/9.0));
    printf("|  2°Farenhait   | %.2f°Celsius   |\n", (2 - 32) * (5.0/9.0));
    printf("|  3°Farenhait   | %.2f°Celsius   |\n", (3 - 32) * (5.0/9.0));
    printf("|  4°Farenhait   | %.2f°Celsius   |\n", (4 - 32) * (5.0/9.0));
    printf("|  5°Farenhait   | %.2f°Celsius   |\n", (5 - 32) * (5.0/9.0));
    printf("|  6°Farenhait   | %.2f°Celsius   |\n", (6 - 32) * (5.0/9.0));
    printf("|  7°Farenhait   | %.2f°Celsius   |\n", (7 - 32) * (5.0/9.0));
    printf("|  8°Farenhait   | %.2f°Celsius   |\n", (8 - 32) * (5.0/9.0));
    printf("|  9°Farenhait   | %.2f°Celsius   |\n", (9 - 32) * (5.0/9.0));
    printf("| 10°Farenhait   | %.2f°Celsius   |\n", (10 - 32) * (5.0/9.0));
    printf("+-----------------------------------+\n"); 


    return 0;
}

