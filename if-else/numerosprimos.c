# include <stdio.h>

main(){

int num,cont;

cont=0;

printf("Num..: ");
scanf("%d",&num);


/*Um n�mero s� � primo se for divis�vel por 1 e ele mesmo,
ou seja, se for divis�vel por apenas 2 n�mero, h� n�o ser
que o n�mero digitado seja 1, que por sua vez � divis�vel
apenas por um n�mero.*/
int i;
for (i=1; i<=num; ++i)
if (num % i == 0) cont++;

if (cont<=2) printf("\n Primo!\n");
else
printf("Nao e primo!\n");



}
