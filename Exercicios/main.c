#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //Copiar String para uma variavel
    char nome[7];
    strcpy(nome, "Matheus");
    printf("nome: %s \n", nome);


    //Comparar duas strings

    char src[4] = "mat";
    char dst[4] = "mat";
    int rst;

    rst = strcmp(src, dst);
    if (rst == 0){
        printf("'%s' igual a '%s'\n", src, dst);
    }else if(rst < 0){
        printf("'%s' menor que '%s'\n",src, dst);
    }else if(rst > 0){
        printf("'%s' maior que '%s'\n", src, dst);
    }else
    {
        printf("Erro\n");
    }

    //Concatenar duas strings
    char lang[12] = "Linguagem";
    strcat(lang, " de Programacao C");

    printf("%s e melhor que java\n", lang);

    //Tamanho da string
    int tamanho;
    tamanho = strlen(lang);
    printf("Tamanho da string %s e: %i",lang, tamanho);

    return 0;
}

