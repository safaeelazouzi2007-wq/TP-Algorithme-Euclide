#include <stdio.h>

int main() {
    int a, b, reste;

    // Demander à l'utilisateur d'entrer deux entiers
    printf("Entrez deux entiers : ");
    scanf("%d %d", &a, &b);

    // Algorithme d’Euclide pour calculer le PGCD
    // Tant que le reste n'est pas nul, on continue les divisions
    while (b != 0) {
        reste = a % b;  // Calcul du reste de la division
        printf("%d = %d × (%d) + %d\n", a, b, a / b, reste);  // Afficher les étapes
        a = b;  // On remplace a par b
        b = reste;  // On remplace b par le reste
    }

    // Quand b devient 0, le PGCD est a
    printf("Le PGCD est : %d\n", a);

    return 0; // Fin du programme
}
