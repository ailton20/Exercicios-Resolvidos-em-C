#include <stdio.h>
#include <stdlib.h>
/*Exemplo: Fa�a um programa em C que pe�a ao usu�rio duas notas que
ele tirou e mostre a m�dia.Use vetores! Ali�s, use somente um
vetor para essas tr�s vari�veis.*/

int main()
{
    float nota[3];
    printf("Digite sua primeira nota: ");
    scanf("%f",&nota[0]);
    printf("Digite sua primeira nota: ");
    scanf("%f",&nota[1]);

    nota[3]= (nota[0]+nota[1])/2;
    printf("%.1f",nota[3]);
    return 0;
}
