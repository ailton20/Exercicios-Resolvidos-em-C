#include <stdio.h>

int main(){
	int v[80], i;
/*posi��o 3 do vetor v recebe o inteiro 4 */

	v[3] = 4;
	i = 2;
/*posic�o 2 do vetor v recebe o inteiro 3*/
	v[i] = 3;
/*Qual a posi��o do vetor v que recebe a posi��o 10*/
	v[[v[v[i]]]];
	return 0;
}