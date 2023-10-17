#include <stdio.h>

int main() {
    int num;

    printf("Introduce un número entero: ");
    scanf("%d", &num);
      if (num < 0) {
        num = -num;
    }
    if (num == 0) {
        printf("El primer dígito es igual a 0.\n");
        }



    return 0;
}