#include<stdio.h>
int main(){
    int a, b, c, d, diferenca; 
    printf("Informe o valor de A: ");
    scanf("%d",&a);
    printf("Informe o valor de B: ");
    scanf("%d",&b);
    printf("Informe o valor de C: ");
    scanf("%d",&c);
    printf("Informe o valor de D: ");
    scanf("%d",&d);
    
    diferenca = ( a*b - c*d);
    printf("%d x %d - %d x %d = %d",a,b,c,d, diferenca);
}
