#include <stdio.h>

int main(){


    /*printf("\nexercicio 1\n");
    int num = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);

    while (num >= 0){

        printf("%d\t", num);
        num--;
    }*/

    
    /*printf("\nexercicio 2\n");
    int number;
    int soma = 0;

    while (number >= 0){

        soma = soma + number;

        printf("Digite um numero: ");
        scanf("%d", &number);

    }
    
    printf("Soma dos numeros positivos: %d\n", soma);*/


    /*printf("\nexercicio 3\n");
    int op;
    float um, dois, sair;

    printf("Operacoes Matematicas\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("5 - Sair\n");

    
    while (op != 5){
        
        printf("digite o numero da operacao desejada: \n");
        scanf("%d", &op);

    switch (op){

    case 1:
        printf("1 - Soma\n");
        printf("digite o primeiro numero: \n");
        scanf("%f", &um);
        printf("digite o segundo numero: \n");
        scanf("%f", &dois);
        printf("Soma: %.2f\n", um + dois);
        break;

    case 2:
        printf("2 - Subtracao\n");
        printf("digite o primeiro numero: \n");
        scanf("%f", &um);
        printf("digite o segundo numero: \n");
        scanf("%f", &dois);
        printf("Subtracao: %.2f\n", um - dois);
        break;

    case 3:
        printf("3 - Multiplicacao\n");
        printf("digite o primeiro numero: \n");
        scanf("%f", &um);
        printf("digite o segundo numero: \n");
        scanf("%f", &dois);
        printf("Multiplicacao: %.2f\n", um * dois);
        break;

    case 4:
        printf("4 - Divisao\n");
        printf("digite o primeiro numero: \n");
        scanf("%f", &um);
        printf("digite o segundo numero: \n");
        scanf("%f", &dois);
        printf("Divisao: %.2f\n", um / dois);
        break;
    
    default:
        break;
    }

    }*/


    /*printf("\nexercicio 4\n");
    int senha;
    
    while (senha != 1234){
        
        printf("Digite a senha: ");
        scanf("%d", &senha);

    }
    
    printf("Acesso permitido");*/


    /*printf("\nexercicio 5\n");
    int nota;

    while (nota < 0 || nota > 10){
        
        printf("Digite uma nota de 0 a 10: ");
        scanf("%d", &nota);
    }
    
    printf("Nota Registrada");*/


    /*printf("\nexercicio 6\n");
    int media;
    int nota;
    int contador = 0;
    char resposta;
    float soma = 0;

    printf("Digite a primeira nota: ");
    scanf("%d", &nota);
    soma = soma + nota;
    contador = contador + 1;

    printf("Deseja adicionar mais notas? s/n: ");
    scanf(" %c", &resposta);
    
    
    while (resposta == 's'){
        
        printf("Digite a proxima nota: ");
        scanf("%d", &nota);
        soma = soma + nota;
        contador = contador + 1;

        printf("Deseja adicionar mais notas? s/n: ");
        scanf(" %c", &resposta);

    }

    if (contador > 0) {
    media = soma / contador;
    printf("Media das %d notas: %d\n", contador, media);
    } else {
    printf("Nenhuma nota foi digitada.\n");
    }*/


    /*printf("\nexercicio 7\n");
    int number;
    int divisor = 2;
    int primo = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &number);

    if (number < 2){
        primo = 0;
    }
    
    while (divisor <= number / 2 && primo == 1){
        if (number % divisor == 0) {
        primo = 0;
    }

    divisor = divisor + 1;

    }
    
    if (primo == 1) {
    printf("%d e um numero primo!\n", number);
    }else {
    printf("%d NAO e um numero primo.\n", number);
    }*/


    /*printf("\nexercicio 8\n");
    int numero;

    printf("digite um numero (digite 0 para parar): ");
    scanf(" %d", &numero);

    while (numero != 0){

        (numero % 2 == 0 ? printf("numero par\n") : printf("numero impar\n"));

        printf("digite um numero (digite 0 para parar): ");
        scanf(" %d", &numero);

    }*/


    /*printf("\nexercicio 9\n");

    int valor;
    char continuar;
    int notas100, notas50, notas20, notas10;

    do {
        printf("Digite o valor do saque (entre 10 e 1000, notas disponiveis: 10, 20, 50, 100): ");
        scanf("%d", &valor);
    
    if (valor < 10 || valor > 1000 || valor % 10 != 0) {
        printf("Valor invalido!\n");
    } else {
        notas100 = valor / 100;
        valor = valor % 100;
        
        notas50 = valor / 50;
        valor = valor % 50;
        
        notas20 = valor / 20;
        valor = valor % 20;
        
        notas10 = valor / 10;
        
        printf("\nNotas fornecidas:\n");
        if (notas100 > 0) printf("%d nota(s) de R$ 100\n", notas100);
        if (notas50 > 0) printf("%d nota(s) de R$ 50\n", notas50);
        if (notas20 > 0) printf("%d nota(s) de R$ 20\n", notas20);
        if (notas10 > 0) printf("%d nota(s) de R$ 10\n", notas10);
    }
    
    printf("\nDeseja fazer outro saque? (s/n): ");
    scanf(" %c", &continuar);
    
    switch (continuar) {
        case 's':
            printf("\n--- Novo saque ---\n");
            break;
        case 'n':
            printf("Programa encerrado. Obrigado!\n");
            break;
        default:
            printf("Opcao invalida! Programa encerrado.\n");
            continuar = 'n';
            break;
    }
    
    } while (continuar == 's');*/


    printf("\nexercicio 10\n");
    


    /*printf("\nexercicio 11\n");
    int n = 0;
    char cont;
    int tabuada;

    do {
    n = 0;
    
    printf("Digite um numero: \n");
    scanf("%d", &tabuada);
    
    printf("\n--- Tabuada do %d ---\n", tabuada);

    while (n <= 10) {
        printf("%d * %d = %d\n", tabuada, n, n * tabuada);
        n++;
    }
    
    printf("\nDeseja ver outra tabuada? (s/n): \n");
    scanf(" %c", &cont);
    
    } while (cont == 's');*/
    
    
    return 0;
}