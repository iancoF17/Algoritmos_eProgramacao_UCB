#include<stdio.h>
//Construa um algoritmo que calcule a área de um círculo cujo raio é fornecido pelo usuário (use área= 3.14 x raio(ao quadrado).



int main(){
    float raio, area;
    printf("Informe o valor do raio: ");
    scanf("%f", &raio);

    area = 3.14 * (raio * raio);
    printf("A area do circulo de acordo com o raio informado e: %.2f", area);
}
