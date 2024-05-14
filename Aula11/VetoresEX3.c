#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
//um programa que leia cinco valores e os armazene em um vetor. Em seguida,
//mostre todos os valores lidos juntamente com a média dos valores.
int main(){
    setlocale(LC_ALL, "Portuguese");
    float numeros[5], soma=0;
    int i;
    for (i=0; i < 5; i++){
        printf("Insira o número %d: ", i+1);
        scanf("%f", &numeros[i]);
    }
    for (i=0; i < 5; i++){
        printf("Posição %d = %f\n", i+1, numeros[i]);
        soma = soma + numeros[i];
    }
    printf("Média = %f\n", soma/5);
    system("pause");
    return 0;
}
