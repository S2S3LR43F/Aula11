#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int A[6]= {1, 0, 5, -2, -5, 7};
    int soma = A[0] + A[1] + A[5];
    int i;

    A[4] = 100;
    printf("%d\n", soma);

    for (i=0; i < 6; i++){
    printf("%d\n", A[i]);

    }


system("pause");
return (0);
}
