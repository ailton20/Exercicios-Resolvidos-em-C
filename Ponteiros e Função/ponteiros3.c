#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**** Lista de Exerc�cios - Fun��es e Ponteiros em C */

/**TODO: Escreva os cabe�alhos (prot�tipos) das funcoeses aqui **/
/**...**/

/**TODO: Definicoes das funcoes**/
// funcao para incrementar N de um valor num
void incrementa(int *n, int num)
{
    *n=*n+num;
    return;
}

/* funcao que realiza um swap, ou seja, troca os valores das vari�veis A e B*/
void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    return;
}


// funcao calc deve colocar em soma o valor da soma de x e y.
void calc(int x, int y, int *soma)
{
    *soma=x+y;
    return;
}

int eqSegundoGrau(float a, float b, float c, float *x1, float *x2){
    float delta;
    delta = (b*b) - 4*(a)*(c);
    if (delta <0){
        return -1;
    }
    if (delta>0){
        *x1=(-b+sqrt(delta))/2*(a);
        *x2=(-b-sqrt(delta))/2*(a);
        return 1;
    }
    if (delta==0){
        *x1=-b/(2*a);
        return 0;
    }
    return -2;
}

/**Funcoes de teste **/
/*defini��o de fun��es de teste */
void testaIncrementa(){
    printf("<funcao incrementa>\n");
    int a=2,b=3,c=10;

    /*teste 1*/
    incrementa(&a,b);
    if(a == 5){
        printf("    teste 1: ok.\n");
    }else{
        printf("    teste 1: not ok.\n");
    }

    /*teste 2*/
    incrementa(&a,c);
    if(a == 15){
        printf("    teste 2: ok.\n");
    }else{
        printf("    teste 2: not ok.\n");
    }
}

void testaSwap(){
    printf("<funcao swap1>\n");
    int a=1,b=2,c=6,d=7;

    swap(&a,&b);
    if(a == 2 && b == 1){
        printf("    teste 1: ok.\n");
    }else{
        printf("    teste 1: not ok.\n");
    }

    swap(&c,&d);
    if(c == 7 && d == 6){
        printf("    teste 2: ok.\n");
    }else{
        printf("    teste 2: not ok.\n");
    }
}


void testaCalc(){
    printf("<funcao calc>\n");
    int soma;
    int x=10,y=20;
    calc(x,y,&soma);
    if(soma == 30){
        printf("    teste 1: ok.\n");
    }else{
        printf("    teste 1: not ok.\n");
    }

    x=24;y=100;
    calc(x,y,&soma);
    if(soma == 124){
        printf("    teste 2: ok.\n");
    }else{
        printf("    teste 2: not ok.\n");
    }
}

void testaEqSegundoGrau(){
    float a, b, c, x1, x2;
    printf("<funcao EqSegundoGrau>\n");
    /*eq. sem raizes*/
    a = 1, b = -1, c = 5;
    if(eqSegundoGrau(a,b,c, &x1, &x2) == -1){
        printf("    teste 1 (sem raizes):  ok.\n");
    }else{
        printf("    teste 1 (sem raizes): not ok.\n");
    }

    /*eq. com uma raiz*/
    a = 4, b = 4, c = 1;
    if(eqSegundoGrau(a,b,c, &x1, &x2) == 0){
        printf("    teste 2 (uma raiz = %.1f):  ok.\n", x1);
    }else{
        printf("    teste 2 (uma raiz): not ok.\n");
    }

    /*eq. com duas raizes*/
    a = 1, b = 5, c = 6;
    if(eqSegundoGrau(a,b,c, &x1, &x2) == 1){
        printf("    teste 3 (duas raizes = %.1f e %.1f):  ok.\n", x1, x2);
    }else{
        printf("    teste 3 (duas raizes): not ok.\n");
    }
}

/**Fun��o principal**/
int main()
{
    testaIncrementa();
    testaSwap();
    testaCalc();
    testaEqSegundoGrau();
    return 0;
}
