#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int array_a[10] = {10,20,30,40,50,60,70,80,90,100};
    int array_b[10] = {5,5,5,5,5,5,5,5,5,5};
    int array_c[10];
    int i;

    for (i=0; i < 10; i++){
        array_c[i] = array_a[i] - array_b[i];
    }

    for (i=0; i < 10; i++){
        printf("C[%d] = %d\n", i, array_c[i]);

    }
    system("pause");
    return 0;

    }
