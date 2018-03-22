#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    int num1, num2, num3;
    char nome[10];
    printf("Digite um inteiro, uma palavra de até 10 letras  e mais dois inteiros, separados por enter ou espaço.");
    scanf("%d %s", &num1, &nome);
    scanf("%d", &num2);
    scanf("%d", &num3);
    //num1 = 10; num2 = 20; num3 = 30;
    printf("Canal Fessor Bruno\nCurso de C++");
    printf("Valor da variável num1: %d, %d e %d\n", num1, num2, num3);
    printf("Valor da variável: %d\nNome: %s\n",num1, nome);
    return 0;
}
