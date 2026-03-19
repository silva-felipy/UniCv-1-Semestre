/*


*/

#include <stdio.h>

int main() {
    //Variaveis de Tempo
    int DiasTrab = 5; 
    int NumSemanas = 45;

    int DiasAno = DiasTrab * NumSemanas; //225 Dias
    printf("Número de dias trabalhados no ano é de %d\n", DiasAno);    

    //Variaveis de Distancia
    int DistTrab = 800; //Distancia até o trabalho
    int MetrosDia = DistTrab * 2; //Ida e Volta 1600m
    float KmDia = MetrosDia / 1000.0; //Conta de conversão; Para converter metros em quilometros, dividimos o valor por 1000
    printf("%d metros percorridos no dia, ou seja, %.1f quilometros no dia\n", MetrosDia, KmDia);
    
    //Quilometros no ano
    int KmAno = KmDia * DiasAno; //360Km no ano
    printf("Ao ano foi andado %dKm\n", KmAno);
    
    return 0;
}

