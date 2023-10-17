int main() {
    int num;

    printf("Introduce un número entero de dos dígitos: ");
    scanf("%d", &num);
    
    if (num < 10 || num > 99) {
        printf("El número no es de dos dígitos.\n");
    } else {
        int digito1 = num/ 10;
        int digito2 = num % 10;    
        
        int inicio, fin;

        if (digito1 < digito2) {
            inicio = digito1;
            fin = digito2;
        } else {
            inicio = digito2;
            fin = digito1;
        }
        printf("Números en el rango: ");
        for (int i = inicio; i <= fin; i++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
