#include<stdio.h>

int main(){
    int a=0;
    float b=0;
    double c=0;
    char d[1], e[30];
  
    printf("Digite o numero inteiro: ");
    scanf("%d",&a);
    printf("Digite o numero real: ");
    scanf("%f",&b);
    printf("Digite o numero real maior: ");
    scanf("%lf",&c);
    printf("Digite a letra: ");
    scanf("%s",&d);
    printf("Digite a string: ");
    scanf("%s",&e);
    
    printf("Inteiro: %d\nReal: %f\nLong Float: %lf\nLetra: %s\nString: %s",a,b,c,d,e);
}
