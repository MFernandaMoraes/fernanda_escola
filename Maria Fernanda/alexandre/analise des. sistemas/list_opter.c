#include <stdio.h>

int main(){

    printf("\nexercicio 1\n");
    int a, b, c, d;
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

    (media >= 7 ? printf("aprovado") : printf("reprovado"));



    printf("\nexercicio 2\n");
    int uno, dos;
    printf("Digite um numero: ");
    scanf(" %d", &uno);
    printf("Digite outro numero: ");
    scanf(" %d", &dos);

    (uno > dos ? printf("numero maior: %d", uno) : printf("numero maior: %d", dos));



    printf("\nexercicio 3\n");
    int password;
    printf("digite sua senha: ");
    scanf("%d", &password);

    (password == 1234 ? printf("Acesso liberado") : printf("Acesso negado, tente novamente"));



    printf("\nexercicio 4\n");
    int un;
    printf("digite um numero: ");
    scanf("%d", &un);

    (un > 0 ? printf("Numero Positivo") : printf("Numero Negativo"));



    printf("\nexercicio 5\n");
    int idade;
    printf("insira sua idade: ");
    scanf("%d", &idade);

    (idade >= 18 ? printf("Obrigado a votar") : printf("Nao precisa votar"));



    printf("\nexercicio 6\n");
    int um, dois;
    printf("Digite um numero: ");
    scanf(" %d", &um);
    printf("Digite outro numero: ");
    scanf(" %d", &dois);

    (um < dois ? printf("Ordem crescente: %d %d", um, dois) : printf("Ordem crescente: %d %d", dois, um));



    printf("\nexercicio 7\n");
    int num;
    printf("Qual o seu salario: ");
    scanf("%d", &num);

    (num >= 2500 ? printf("Nao vai receber aumento") : printf("Vai receber aumento"));


    return 0;

}