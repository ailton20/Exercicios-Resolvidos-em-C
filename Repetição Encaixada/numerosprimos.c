#include <stdio.h>
#include <stdlib.h>
/*Dados n>0 n�meros inteiros positivos, calcular a soma dos que s�o primos
   * Sua solu��o deve conter uma repeti�ao com contador para ler m numeros pelo teclado.
   * Para cada n�mero lido, seu programa deve testar se ele � primo(usando outra repeti��o).
     Em caso afirmativo acumular em uma soma.*/

int main()
{
    int num,num_dois,soma=0;

    printf("Digite a quantidade da sequencia");
    scanf("%d",&num);
    int i;
    for(i=0; i<num; i++)
    {
        printf("Digite um numero");
        scanf("%d",&num_dois);
        int j;
        for (j = 2; j < num_dois; j++)
        {
            if (num_dois % j == 0)
               {
                  soma=soma+num_dois;
               }
        }
    }
     printf("A soma eh %d",soma);
    return 0;
}


