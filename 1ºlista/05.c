//Fazer um algoritmo para auxiliar um construtor a descobrir a quantidade de rolos e a quantidade de metros avulsos de fios que ele precisa adquirir. Sabe-se que o
//construtor tem a quantidade total de fios em metros a serem utilizados na instalação elétrica da obra e que cada rolo de fio tem 50 metros.

#include<stdio.h>
int main(){
    int m_avulsos, m_fios, rolos;

    printf("Digite a quantidade de metros: ");
    scanf("%d", &m_fios);

    rolos = (m_fios / 50);
    m_avulsos = (m_fios % 50);

    printf("Quantidade necessaria de rolos: %d\n", rolos);
    printf("Quantidade necessaria de metros avulsos: %d", m_avulsos);
}
