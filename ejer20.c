#include <stdio.h>

int main() {
    int num;
    int con = 0;


    printf("Introduce un número entero: ");
    scanf("%d", &num);
    if (num < 0) {
        num = -num;
    }
    if (num == 0) {
        con = 1;
    } else {
        while (num > 0) {
            con++;
            num /= 10;
        }

      }
    

 return 0;
}