#include <stdio.h>
#include <stdlib.h>
/*Fa�a um programa em C que receba um n�mero n passado pelo us�ario e
informe o n-�simo termo da sequ�ncia*/
/*
\243 = �
\202 = �
\306 = �*/
int main()
{
    int numero,seq=1;
    printf("Digite um n\243mero positivo: ");
    scanf("%d",&numero);

    int i;
    for (i=1;i<=numero;i++)
    {
        seq=seq + 1;
    }
    if (seq%2 !=0){
        seq=seq*(-1);
    }
    printf("O n\243mero \202 %d",seq);
    return 0;
}
