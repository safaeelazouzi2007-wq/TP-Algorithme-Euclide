#include <stdio.h>

int main() {
    int a, b, r;

    printf("=== Algorithme d'Euclide ===\n");
    printf("Entrez le premier entier : ");
    scanf("%d", &a);
    printf("Entrez le deuxième entier : ");
    scanf("%d", &b);

    int x = a, y = b;

    printf("\nÉtapes du calcul :\n");
    while (b != 0) {
        r = a % b;
        printf("%d = %d * (%d) + %d\n", a, b, a / b, r);
        a = b;
        b = r;
    }

    printf("\nLe PGCD(%d, %d) = %d\n", x, y, a);

    return 0;
}