/* Lista - Struct */
#include <stdio.h>
 
/*Q1: Soma */
/* Utilizando a struct abaixo, crie uma fun��o que recebe uma struct �numeros�
  e retorna a soma de a e b. */
 
typedef struct
{
    int a;
    int b;
}Numeros;
 
int soma(Numeros n){
    int soma;
    soma= n.a + n.b;
 
 
    return soma;
}
 
/*Q2: Maior N�mero */
/*Escreva uma fun��o que recebe uma vari�vel do tipo �numeros� e retorna o maior entre a e b.*/
 
int maiorNumero(Numeros n){
    if(n.a>n.b){
        return n.a;
    }
 
    return n.b;
}
 
/* Q3:  Maior Elemento */
/* Crie uma fun��o que recebe como argumento uma struct �vetor�, e retorna o maior elemento
  desse vetor.*/
typedef struct
{
    int v[10];
    int tamanho;
}Vetor;
 
int maiorElemento(Vetor a){
    int i,maior=0;
    for(i=0;i<10;i++){
        if(a.v[i]>maior){
            maior=a.v[i];
        }
    }
 
    return maior;
}
 
/*Q4: Calculadora */
/* Vamos alterar agora a struct �numeros�, ambas as vari�veis a e b agora s�o do
   tipo float e ser� acrescentado mais uma vari�vel do tipo char chamada �operador�,
   ela deve conter o tipo de opera��o que ser� realizada entre a e b.
   Utilizando a nova struct, crie uma fun��o que retorna o resultado da opera��o
   realizada entre a e b, onde a opera��o a ser realizada � soma (�+�), subtra��o (�-�),
   divis�o (�/�) ou multiplica��o (�*�), dependendo do tipo de opera��o armazenada
   na vari�vel �operador� */
 
typedef struct
{
    float a;
    float b;
    char operador;
}Numeros2;
 
float calcular(Numeros2 n){
    float soma,subtracao,multiplicacao,divisao;
    if(n.operador=='+'){
        soma=n.a+n.b;
        return soma;
    }
    if(n.operador=='-'){
        subtracao=n.a-n.b;
        return subtracao;
    }
    if(n.operador=='*'){
        multiplicacao=n.a*n.b;
        return multiplicacao;
    }
    if(n.operador=='/'){
        divisao=n.a/n.b;
        return divisao;
    }
 
}
 
/* Q5: M�dia das Notas */
/* Utilizando a struct �aluno� definida abaixo, crie uma fun��o que calcula e retorna
  a m�dia das tr�s notas contidas no vetor �notas�. */
 
typedef struct
{
    int matricula;
    float notas[3];
}Aluno;
 
float media(Aluno a){
    int i,somaNota=0,mediaTot;
    for(i=0;i<3;i++){
        somaNota=somaNota+a.notas[i];
        mediaTot=somaNota/3;
    }
    return mediaTot;
}
 
/* Q6: Maior M�dia */
/* Com a struct e a fun��o criada na quest�o anterior, crie uma nova fun��o, que recebe um
  vetor de n alunos como argumento, e retorna o n�mero de matr�cula do aluno com maior m�dia. */
 
int maiorMedia(Aluno a[], int n){
    int i;
    float maior=0;
    for(i=0;i<n;i++){
        if(media(a[i]) > maior){
            maior=media(a[i]);
        }
    }
 
return maior;
}
 
 
/* Construir Personagem */
 
/* A struct "personagem" cont�m os atributos de um personagem em um jogo de RPG, utilizando
  essa struct e a fun��o criarPersonagem constr�i um novo personagem. */
 
typedef struct
{
    int vida;
    int ataque;
}Personagem;
 
Personagem criarPersonagem(int vida, int ataque){
    Personagem p;
    p.vida=vida;
    p.ataque=ataque;
    return p;
}
 
/* Q8: Duelo */
/* Agora vamos criar a fun��o "duelo", ela recebe dois personagens e faz os dois duelar.
A fun��o deve retornar 1 se o personagem a ganhar e 0 caso contr�rio.
Dicas: Utilize um la�o while e enquanto os dois personagens estiverem vivos, ou sej�
a vida dos dois for maior que 0, os dois devem continuar se atacando.
Quando o personagem a ataca o b, a quantidade de vida que o personagem b perde
� igual ao ataque de a, a mesma coisa acontece quando b ataca a. */
 
int duelo(Personagem a, Personagem b){
    while(a.vida>=0 && b.vida>=0){
        b.vida=b.vida-a.ataque;
        a.vida=a.vida-b.ataque;
        if(b.vida==0){
            return 1;
        }
 
        if(a.vida==0){
            return 0;
        }
    }
 
 
}
 
/**Implementa��o das fun��es de teste **/
 
void test_soma()
{
    printf("---------------------\n");
    printf("teste Soma\n");
    Numeros n = {5, 5};
    if(soma(n) == 10){
        printf("    ok.\n");
    }else{
        printf("    not ok.\n");
    }
}
 
void test_maior_numero()
{
    printf("---------------------\n");
    printf("teste Maior Numero.\n");
    Numeros n = {1, 2};
    if(maiorNumero(n) == 2){
        printf("    ok.\n");
    }else{
        printf("    not ok.\n");
    }
}
 
void test_maior_elemento()
{
    printf("---------------------\n");
    printf("teste Maior Elemento.\n");
    Vetor a = {{12, 5, 6, 7, 8}, 5};
    if(maiorElemento(a) == 12){
        printf("    ok.\n");
    }else{
        printf("    not ok.\n");
    }
}
 
void test_calculadora()
{
    printf("---------------------\n");
    printf("teste Calculadora.\n");
    Numeros2 soma = {5, 5, '+'};
    Numeros2 sub =  {5,5, '-'};
    Numeros2 mut =  {5,5, '*'};
    Numeros2 div =  {5,5, '/'};
 
    if(calcular(soma) == 10 && calcular(sub) == 0 && calcular(mut) == 25 && calcular(div) == 1){
        printf("    ok.\n");
    }
    else{
        printf("    not ok.\n");
    }
}
 
void test_media_notas()
{
    printf("---------------------\n");
    printf("teste Media das Notas.\n");
    Aluno a = {132, {5, 10, 6}};
    if(media(a) == 7){
        printf("    ok.\n");
    }else{
        printf("    not ok.\n");
    }
}
 
void test_maior_media()
{
    printf("---------------------\n");
    printf("teste Maior Media.\n");
    Aluno a[3];
    a[0] = (Aluno){5, {2,9,5}};
    a[1] = (Aluno){6, {5,9,5}};
    a[2] = (Aluno){7, {3,9,5}};
 
    if(maiorMedia(a,3) == 6){
        printf("    ok.\n");
    }else{
        printf("    not ok.\n");
    }
}
 
void test_criar_personagem()
{
        printf("---------------------\n");
        printf("teste Criar Personagem.\n");
        Personagem p;
        p = criarPersonagem(100, 20);
        if(p.vida == 100 && p.ataque == 20){
        printf("    ok.\n");
    }else{
        printf("    not ok.\n");
    }
}
 
void test_duelo()
{
        printf("---------------------\n");
        printf("teste Duelo.\n");
        Personagem a = {100, 20};
        Personagem b = {100, 1};
        if(duelo(a, b) == 1 && duelo(b, a) == 0){
            printf("    ok.\n");
    }else{
        printf("    not ok.\n");
    }
}
 
int main()
{
    test_soma();
    test_maior_numero();
    test_maior_elemento();
    test_calculadora();
    test_media_notas();
    test_maior_media();
    test_criar_personagem();
    test_duelo();
    return 0;
}