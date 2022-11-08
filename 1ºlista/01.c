#include<stdio.h>

int main(){
    int horas, minutos, segundos;

    printf("Digite a quantidade de horas para a conversao: ");
    scanf("%d", &horas);

    minutos = horas * 60;
    segundos = horas * 3600;

    printf("Hora fornecida: %d\n", horas);
    printf("Valor em minutos: %d\n", minutos);
    printf("Valor em segundos: %d", segundos);
}
