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
        }else {
        while (num >= 10) {
            num /= 10;
        }

        printf("El primer dígito del numeero es igual a %d.\n", num);
    }

    return 0;
}