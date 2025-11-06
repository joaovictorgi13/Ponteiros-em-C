#include <stdio.h>
#include <string.h>
#include <memory.h>
#include <stdlib.h>

typedef struct {
    char *nome;
    int idade;
} Pessoa;


int soma (int a, int b){
    return a + b;
}

int subtrai(int a , int b){
    return a - b;
}

int multiplica (int a, int b){
    return a * b;
}

int divide (int a , int b){
    return a / b;
}

void preencheNomes(char **nomes, int qtd){
    for (int i = 0; i < qtd; i++){
        nomes[i] = malloc(sizeof(char) * 20);
    }

    strcpy(nomes[0], "KIARA");
    strcpy(nomes[1], "MARCIO");
    strcpy(nomes[2], "NATH");
    strcpy(nomes[3], "BIA");
    strcpy(nomes[4], "JOAO");
    
}

int main (){
    printf("Ponteiros\n\n");
    
    //Ponteiro Simples
    int num = 20;
    printf("num = %d\n", num);
    int *ptr = &num;
    *ptr = 40;
    printf("num = %d\n", num);


    //Ponteiro para string
    char *string = malloc(sizeof(char) * 20); // reserva memoria ram para a "string".
    strcpy (string, "JOAO");
    printf("string = %s\n", string);
    free(string); //Libera a memoria de volta para o sistema apos o uso.



    //Ponteiro para struct
    Pessoa *pessoa = malloc(sizeof(Pessoa));
    pessoa->idade = 43;
    pessoa->nome = malloc(sizeof(char) * 20);
    strcpy(pessoa->nome, "Joao");

    printf("Pessoa nome = %s, idade =%d\n", pessoa->nome, pessoa->idade);
    free(pessoa->nome);
    free(pessoa);

    //Ponteiro paraa função
    int (*func)(int, int) = soma;
    printf("soma = %d\n", soma(10,20));
    printf("soma = %d\n", func(10,20));

    //Ponteiro para ponteiros
    int qtd = 5;
    char **nomes = malloc(sizeof(char*) * qtd); 
    preencheNomes(nomes, qtd);
    for(int i = 0; i < qtd; i++){
        printf("nome[%d]=%s\n", i, nomes[i]);
        free(nomes[i]);
    }
    free(nomes);

    //Ponteiro para ponteiros de uma função
    int (*funcs[])(int, int) = { soma, subtrai, multiplica, divide};

    for (int i = 0; i < 4; i++){
        printf("operacao[%d]=%d\n", i, funcs[i](10,20));
    }


    printf("Fim!\n\n");
}
