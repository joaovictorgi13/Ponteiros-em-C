#include <stdio.h>
#include <string.h>
#include <memory.h>
#include <stdlib.h>

int main (){
    printf("Ponteiros\n\n");
    
    //Ponteiro Simples
    int num = 20;
    printf("num = %d\n", num);
    int *ptr = &num;
    *ptr = 40;
    printf("num = %d\n", num);

    //Ponteiro para string
    char *string = malloc(sizeof(char) * 20);
    strcpy (string, "JOAO");
    printf("string = %s\n", string);
    free(string);
    

    //Ponteiro para struct

    //Ponteiro para ponteiros

    //Ponteiro para ponteiros de uma função

    printf("Fim!\n\n");
}
