#include <stdio.h>
/*Receber do teclado, v�rios n�meros e verificar se eles s�o ou n�o quadrados perfeitos*/

int main()
{
  int numero,c,p=1;//p come�a com um pq eh uma multiplica��o
  
  printf("Informe um numero positivo: ");
  scanf("%d", &numero);
  
  c = 1;//contador vai come�ar por 1
  
  while (p < numero){//multiplica at� chegar no numero informado
    c++;
    p=c * c;
  }
  if (p == numero){
    printf("\nO numero %d eh quadrado perfeito.\n",numero);
   }
  else{
    printf("\nO numero %d nao eh quadrado perfeito.\n",numero);
   }
   return 0;
}
