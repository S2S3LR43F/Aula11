#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
//Fa�a um programa que leia um vetor de oito posi��es. Em seguida, leia tamb�m
//dois valores X e Y quaisquer correspondentes a duas posi��es no vetor. Seu
//programa dever� exibir a soma dos valores encontrados nas respectivas posi��es
//X e Y.
int main(){
    setlocale(LC_ALL, "Portuguese");
    int vetor[8];
    int soma;
    int x = vetor[1], y = vetor[2];
    int i;


    for(i=0 ;i < 8; i++){
    printf("Insira um vetor %d: ", i+1);
    scanf("%d", &vetor[i]);
    }

   do {

    printf("Insira o valor de x: ");
    scanf("%d", &x);

    printf("Insira o valor de y: ");
    scanf("%d", &y);
   }
while ((x<0) || (x>8) && (y<0) || (y<8));


    printf("A soma �: %d\n", vetor[x] + vetor[y]);
    system("pause");
    return 0;
}
