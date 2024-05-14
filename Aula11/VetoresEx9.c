#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int numeros[100], i=0;
    int aux = 1;

    while (i < 100){
        if (aux%7 != 0){
            numeros[i] = aux;
            i++;
            aux++;
        }
     else{
        aux++;
    }
    }
     for (i=0; i < 100; i++){
         printf("numeros[%d] = %d\n", i, numeros[i]);
     }

system("pause");
return 0;
    }
