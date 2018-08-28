#include <stdio.h>
#include <stdlib.h>

void menu();
void fatorial();
int main()
{
    menu();
}
menu (){
    int n;
    do {
    printf("1 para fatorial, 2 para primo, 0 para sair \n");
    scanf("%d", &n);
    if (n == 0){
        break;
    }else if(n == 1){
        fatorial();
    }
    else{
        printf("Opcao invalida \n");
    }
    printf("Opcao digitada: %d \n", n);
    }while (n != 0);
}
fatorial(){
    int number, resultado = 1;
    printf("Informe um numero para o fatoriak dele: \n");
    scanf("%d", &number);

    for(int r = number; r >= 1; r--){
        resultado *= r;
    }
    printf("Resultado de %d! e: '%d' \n",number, resultado);
}
