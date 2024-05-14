#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
//Faça um programa que leia um vetor de oito posições. Em seguida, leia também
//dois valores X e Y quaisquer correspondentes a duas posições no vetor. Seu
//programa deverá exibir a soma dos valores encontrados nas respectivas posições
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


    printf("A soma é: %d\n", vetor[x] + vetor[y]);
    system("pause");
    return 0;
}
