#include <stdio.h>

int main (){

    int glicemia;
    char op;
    printf("Você está gravida? s/n\n");
    scanf("%c", &op);

    switch (op){
    case 's':{
        int glicemia;
        printf("Digite o valor da glicemia\n");
        scanf("%d", &glicemia);
        (glicemia < 92) ? printf("Ta suave") : printf("Va procurar um medico");
        break;}
    case 'n':{
        int glicemia;
        printf("Digite o valor da glicemia\n");
        scanf("%d", &glicemia);
        (glicemia < 100) ? printf("Ta suave") : printf("Va procurar um medico");
        break;}

    default:
        printf("Que");
        break;
    }

    return 0;
}