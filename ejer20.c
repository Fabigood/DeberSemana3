#include <stdio.h>

int main() {
    int num;
    int con = 0;


    printf("Introduce un número entero: ");
    scanf("%d", &num);
    if (num < 0) {
        num = -num;
    }



 return 0;
}