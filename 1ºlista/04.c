//Construa um algoritmo que a partir da leitura de dois números forneça o resto e o quociente da divisão do primeiro pelo segundo número.
#include<stdio.h>
int main(){
    int n1, n2;
    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);
    printf("Digite o segundo valor: ");
    scanf("%d", &n2);
    printf("Resto: %d\n", n1 % n2);
    printf("Quociente: %d", n1 / n2);
}
