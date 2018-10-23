#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//DECLARANDO FUNCAO COPIAR, TAMANHO, COMPARAR e CONCATENAR
char * copiar(char *dst, char *src);
int len(char *src);
bool comparar(char *dst, char *src);
char * concatenar(char *dst, const char *src);
int main()
{

    // INVOCANDO FUNCAO DE COPIAR STRING
    char str1[] = "Python";
    //char dst1[10];
    char dst1[10];
    printf("String copiada: %s\n", copiar(dst1, str1));

    // INVOCANDO FUNCAO DE RETORNAR TAMANHO DE STRING

    printf("Tamanho da String: %s e = %d \n",str1,len(str1));

    bool condition = comparar(str1, copiar(dst1, str1));
    printf("Comparando '%s' e igual a '%s' ? R: %s \n",str1,copiar(dst1, str1), condition == 1?"VERDADEIRO":"FALSO" );

    char nome[] = "MATHEUS";
    char sobrenome[] = "LEITE";

    printf("Concatenando MATHEUS + LEITE = %s", concatenar(nome, sobrenome));

    return 0;
}

// METODO PARA COPIAR STRING
char * copiar(char *dst, char *src) {
    //VERIFICA SE FOI ALOCADO
    if(dst == NULL && src == NULL){
        return;
    }

    // ALOCA UMA VARIAVEL QUE IRA ARMAZENAR A NOVA STRING COM ENDERECO NA DE DESTINO
    char *string = dst;


    //Percorre toda string de src verificando ate o final dela
    for (int x = 0; src[x] != '\0'; x++ ){
        //Adiciona em dst posicao x o que tem em src na mesma posicao x
        dst[x] = src[x];
    }
    //Retorna o valor do endereco de string
    return string;
}

int len(char *src){
	int tamanho = 0;

	//For interando na string com condicao de parar o contador quando chegar no final da string
	for (int x = 0; src[x] != '\0'; x++){
        tamanho += 1;
	}

	return tamanho;
}

bool comparar(char *dst, char *src){


	int resultado;

    //Percorre as duas variaveis ate o final das duas em conjunto
	for (int x = 0 ; dst[x] != '\0' && src[x] != '\0' ; x++){
        //Se a posicao da primeira for igual a posicao da segunda tiverem os mesmos valores retorna true
		if (dst[x] == src[x]){
			return true;
        //CASO nao retorna falso
		}else{
			return false;
		}
	}
}

char *concatenar(char *dst, const char *src){

    int i,j;

    //for para saber o tamanho da string destino
    for (i = 0; dst[i] != '\0'; i++){

    }

    //segundo for para saber o tamanho da string origem
    for (j = 0; src[j] != '\0'; j++){

        //adiciona novas posições no array char de string com um valor da posicao da string de origem
        dst[i+j] = src[j];
    }

    //Soma o tamanho das duas para adicionar o '\0' indicando fim da string
    dst[i+j] = '\0';

    return dst;

}

