#include <stdio.h>

int main() {
    int num;
    printf("Introduce un numero entero: ");
    scanf("%d", &num);


    printf("Tabla de multiplicar del %d:\n", num);
    if (num >= 0) {
    for (int i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", num, i, num * i);   
            }
    }else{
        for (int i = 1; i <= 10; i++) {
            printf("(-%d) x %d = %d\n", -num, i, -num * i);
        }
    }

     return 0;
}