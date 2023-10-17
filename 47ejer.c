#include <stdio.h>

int main() {
    int num;
    int fact = 1;
    int suma = 0;
     printf("Introduce un numero entero: ");
     scanf("%d", &num);
        if (num < 1) {
        printf("El número debe ser mayor o igual a 1.\n");
    } else {
        for (int i = 1; i <= num; i++) {
            fact *= i;
            suma += fact;
        }
         printf("La suma de los factoriales de 1 a %d es: %d\n", num, suma);
    }

    return 0;
}