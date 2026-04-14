#include <stdio.h>

int main(){
    char operador;

    double num1, num2;
    printf("Digite o primeiro valor: \n");
    scanf("%lf", &num1);
    printf("Digite o operador valor: + - * / \n");
    scanf(" %c", &operador);
    printf("Digite o segundo valor: \n");
    scanf("%lf", &num2);

    switch (operador){
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            break;

        default:
            printf("Opcao invalida:\n");

    }

    return 0;
}