#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int numeros[6], i;
    for (i=0; i < 6; i++){
        printf("Insira o número %d: ", i+1);
        scanf("%d", &numeros[i]);
    }
    for (i=0; i < 6; i++){
        printf("Posição %d = %d\n", i, numeros[i]);
    }
    system("pause");
    return 0;




}
