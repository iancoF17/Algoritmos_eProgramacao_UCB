#include<stdio.h>

int main(){
    float A, B, media;

    printf("Digite a nota A: ");
    scanf("%f", &A);
    printf("Digite a nota B: ");
    scanf("%f", &B);
    
    media = (3.5*A + 7.5*B) / 11;
    printf("Media do aluno foi: %.2f",media);
}
