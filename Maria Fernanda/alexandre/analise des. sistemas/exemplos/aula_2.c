#include <stdio.h>
#include <stdbool.h>

//biblioteca do tipo bool

int main(){

    int x = 10; //int é para declarar variáveis do tipo inteiro, ou seja, números sem casas decimais
    float pi = 3.14; //floot é para declarar variáveis do tipo ponto flutuante, ou seja, números com casas decimais
    char letra = 'A'; //char é para declarar varáveis do tipo caractere, ou seja, letras, números ou símbolos entre aspas simples
    bool verdadeiroEfalso = true; //bool é para declarar variáveis do tipo booleano, ou seja, true ou false

//imprimindo as variáveis

    printf("Valor de x: %d\n", x); //%d éparar imprimir variáveis do tipo inteiro, ou seja, números sem casas decimais
    printf("Valor de pi: %f\n", pi); //%f é para imprimir variáveis do tipo ponto flutuante com 2 casas decimais
    printf("Letra: %c\n", letra); //%c é para imprimir variáveis do tipo caractere, ou seja, letras, números ou símbolos entre aspas simples
    printf("1 verdadeiro e 0 falso: %d\n", verdadeiroEfalso); //%d é tbm usado para imprimir variáveis do tipo booleano, ou seja, true e false, true é 1 e false é 0

    return 0;

} 


