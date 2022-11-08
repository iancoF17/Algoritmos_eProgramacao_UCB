#include<stdio.h>

int main(){
    char nome[50], sexo, matricula[15];
    float horas, p_hora, salarioMes;

    printf("Digite seu nome: ");
    fgets(nome, 50, stdin);
    printf("Digite seu sexo: [M]asculino / [F]eminino ");
    scanf("%c", &sexo);
    printf("Digite o numero da matricula: ");
    scanf("%s", &matricula);

    printf("Quantas horas de trabalho por mes? ");
    scanf("%f", &horas);
    printf("Quanto recebes por hora? ");
    scanf("%f", &p_hora);

    salarioMes = horas * p_hora;

    printf("\nNome: %sSexo: %c \nMatricula %s \n", nome, sexo, matricula);
    printf("Horas trabalhadas: %.2f \nSalario por hora: %.2f \nSalario mensal: %.2f", horas, p_hora, salarioMes);

}
