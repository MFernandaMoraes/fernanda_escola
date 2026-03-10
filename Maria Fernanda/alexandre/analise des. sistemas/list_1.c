#include <stdio.h>
#include <stdbool.h>

int main(){
    printf("\nexercicio 1\n");
    char letra;
    int idade;
    float altura;
    printf("Digite a primeira letra do seu nome: ");
    scanf("%c", &letra);
    printf("Digite sua idade: ");
    scanf(" %d", &idade);
    printf("Digite sua altura: ");
    scanf(" %f", &altura);

    printf("Primeira letra do seu nome -> %c\n", letra);
    printf("Sua idade -> %d\n", idade);
    printf("Sua altura -> %.2f\n", altura);



    printf("\nexercicio 2\n");
    int x = 10, y = 5;
    int soma = x + y;
    printf("%d + %d = %d\n", x, y, soma);
    printf("Soma = %d\n", x + y);



    printf("\nexercicio 3\n");
    float a = 3.14, b = 1.86;
    float sub = a - b;
    printf("%f - %f = %f\n", a, b, sub);
    printf("Subtracao = %f\n", a - b);



    printf("\nexercicio 4\n");
    int um = 2, dois = 4;
    int mult = um * dois;
    printf("%d * %d = %d\n", um, dois, mult);
    printf("multiplicacao = %d\n", um * dois);



    printf("\nexercicio 5\n");
    float one = 6.6, two = 3.3;
    float div = one / two;
    printf("%f / %f = %f\n", one, two, div);
    printf("divisao = %f\n", one / two);



    printf("\nexercicio 6\n");
    int numero = 5;
    int dobro = numero * 2;
    printf("%d * %d = %d\n", numero, 2, dobro);
    printf("dobro = %d\n", numero * 2);



    printf("\nexercicio 7\n");
    char letter = 'M';
    printf("Letra: %c\n", letter);



    printf("\nexercicio 8\n");
    float num = 5.1;
    float mais = num + 10.5;
    printf("%f * %f = %f\n", num, 10.5, mais);
    printf("resultado = %f\n", num + 10.5);



    printf("\nexercicio 9\n");
    int un = 4, due = 7, tre = 9, quattro = 3;
    int more = un + due + tre + quattro;
    int media = more / 4;
    printf("%d + %d + %d + %d = %d\n", un, due, tre, quattro, more);
    printf("%d / %d = %d\n", more, 4, media);
    printf("resultado = %d\n", more / 4);



    printf("\nexercicio 10\n");
    int uno, dos;
    int menos = uno - dos;
    printf("Digite um numero: ");
    scanf(" %d", &uno);
    printf("Digite outro numero: ");
    scanf(" %d", &dos);
    printf("Subtracao = %d\n", uno - dos);



    printf("\nexercicio 11\n");
    int number = 5;
    printf("\ntabuada do 5\n");
    printf("5x1 = %d\n", number * 1);
    printf("5x2 = %d\n", number * 2);
    printf("5x3 = %d\n", number * 3);
    printf("5x4 = %d\n", number * 4);
    printf("5x5 = %d\n", number * 5);
    printf("5x6 = %d\n", number * 6);
    printf("5x7 = %d\n", number * 7);
    printf("5x8 = %d\n", number * 8);
    printf("5x9 = %d\n", number * 9);
    printf("5x10 = %d\n", number * 10);


    return 0;
}