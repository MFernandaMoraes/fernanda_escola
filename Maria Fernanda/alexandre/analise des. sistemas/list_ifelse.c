#include <stdio.h>

int main(){


    printf("\nexercicio 1\n");
    int uno, dos;
    printf("Digite um numero: ");
    scanf(" %d", &uno);
    printf("Digite outro numero: ");
    scanf(" %d", &dos);
    if (uno > dos){
        printf("o maior e o: %d", uno);
    } else {
        printf("o maior e o: %d", dos);
    }


    printf("\nexercicio 2\n");
    int password;
    printf("digite sua senha: ");
    scanf("%d", &password);
    if (password == 1234){
        printf("acesso permitido");
    } else {
        printf("acesso negado");
    }


    printf("\nexercicio 3\n");
    int ano;
    printf("Qual ano nasceu?: ");
    scanf("%d", &ano);
    if (ano <=2008){
        printf("maior de idade");
    } else {
        printf("menor de idade");
    }


    printf("\nexercicio 4\n");
    int laranjas;
    printf("quantas laranjas voce comprou?: ");
    scanf("%d", &laranjas);
    if (laranjas < 12){
        printf("total da compra: %.2f", laranjas * 0.30);
    } else {
        printf("total da compra: %.2f", laranjas * 0.25);
    }


    printf("\nexercicio 5\n");
    int um, dois;
    printf("Digite um numero: ");
    scanf(" %d", &um);
    printf("Digite outro numero: ");
    scanf(" %d", &dois);
    if (um > dois){
        printf("ordem crescente: %d %d", dois, um);
    } else {
        printf("ordem crescente: %d %d", um, dois);
    }


    printf("\nexercicio 6\n");
    int num;
    printf("digite um numero: ");
    scanf("%d", &num);
    if (num > 0){
        printf("positivo");
    } else {
        printf("negativo");
    }


    printf("\nexercicio 7\n");
    int un, due, tre;
    printf("digite um numero: ");
    scanf("%d", &un);
    printf("digite um numero: ");
    scanf("%d", &due);
    printf("digite um numero: ");
    scanf("%d", &tre);

    printf("\nprimeiro numero\n");
    if (un > 0){
        printf("maior que zero\n");
    } else if (un < 0){
        printf("menor que zero\n");
    } else {
        printf("igual a zero\n");
    }

    printf("\nsegundo numero\n");
    if (due > 0){
        printf("maior que zero\n");
    } else if (due < 0){
        printf("menor que zero\n");
    } else {
        printf("igual a zero\n");
    }

    printf("\nterceiro numero\n");
    if (tre > 0){
        printf("maior que zero\n");
    } else if (tre < 0){
        printf("menor que zero\n");
    } else {
        printf("igual a zero\n");
    }


    printf("\nexercicio 8\n");
    int a , b, c, d;
    printf("digite um numero: ");
    scanf(" %d", &a);
    printf("digite um numero: ");
    scanf(" %d", &b);
    printf("digite um numero: ");
    scanf(" %d", &c);
    printf("digite um numero: ");
    scanf(" %d", &d);

    int soma = a + b + c + d;
    float media = (float)soma / 4;

    printf("media = %.2f\n", media);

    if (media < 6){
        printf("reprovado");
    } else if (media >= 6 && media <= 7){
        printf("exame");
    } else {
        printf("aprovado");
    }


    printf("\nexercicio 9\n");
    int numero;
    printf("digite um numero: ");
    scanf(" %d", &numero);

    if (numero % 2 == 0){
        printf("par");
    } else {
        printf("impar");
    }


    printf("\nexercicio 10\n");
    int idade;
    printf("insira sua idade: ");
    scanf("%d", &idade);
    if (idade > 0 && idade <= 17){
        printf("crianca\n");
    } else if (idade < 0){
        printf("idade invalida");
    } else if (idade > 17 && idade <= 59){
        printf("adulto");
    } else {
        printf("idoso");
    }

    return 0;
}