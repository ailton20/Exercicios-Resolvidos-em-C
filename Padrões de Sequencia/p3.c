#include <stdio.h>
/*Problema 3: Uma loja de discos anota diariamente durante o m�s
de agosto a quantidade de discos vendidos. Determinar em que dia
desse m�s ocorreu a maior venda e qual foi a quantidade de discos
vendida nesse dia. OBS: Voce deve entrar com os dados da venda de
disco de cada dia do m�s.*/

int main()
{
    int discos,valor,diaVenda,dia=1;

    printf("Coloque o numero de discos vendindo no dia: %d\n",dia);
    scanf("%d",&valor);

    while (dia<30)
    {
        dia++;
        printf("Coloque o numero de discos vendindo no dia: %d\n",dia);
        scanf("%d",&discos);

        if(valor<discos)
        {
            diaVenda = dia;
            valor = discos;
        }
    }
    printf("O dia que vendeu mais no mes foi o dia %d com %d discos vendidos",diaVenda,valor);
    return 0;
}
