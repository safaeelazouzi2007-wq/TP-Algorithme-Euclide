#include <stdio.h>

// -------------------------------
// Fonction pour calculer le PGCD
// -------------------------------
int pgcd(int a, int b) {
    int reste;
    while (b != 0) {
        reste = a % b;
        printf("%d = %d × (%d) + %d\n", a, b, a / b, reste);
        a = b;
        b = reste;
    }
    return a;
}

// ------------------------------------------------------
// Algorithme d’Euclide étendu : calcule d, x, y tels que
// a*x + b*y = d  (où d = pgcd(a,b))
// ------------------------------------------------------
int euclide_etendu(int a, int b, int *x, int *y) {
    if (b == 0) {
        *x = 1;
        *y = 0;
        return a;
    }

    int x1, y1;
    int d = euclide_etendu(b, a % b, &x1, &y1);

    *x = y1;
    *y = x1 - (a / b) * y1;

    return d;
}

// -------------------------------
// Programme principal
// -------------------------------
int main() {
    int a, b, c;
    int d, x0, y0;

    printf("\n=== ÉQUATION DIOPHANTIENNE LINÉAIRE ===\n");
    printf("Forme : a*x + b*y = c\n\n");

    // Entrée des valeurs
    printf("Entrez les valeurs de a, b et c : ");
    scanf("%d %d %d", &a, &b, &c);

    // Étape 1 : calcul du PGCD et test d’existence
    printf("\n--- Étape 1 : Calcul du PGCD ---\n");
    d = euclide_etendu(a, b, &x0, &y0);
    printf("\nPGCD(%d, %d) = %d\n", a, b, d);

    if (c % d != 0) {
        printf("\n➡️ Pas de solution entière car %d ne divise pas %d.\n", d, c);
        return 0;
    }

    printf("\n➡️ Il existe des solutions entières car %d divise %d.\n", d, c);

    // Étape 2 : calcul d’une solution particulière
    x0 = x0 * (c / d);
    y0 = y0 * (c / d);

    printf("\n--- Étape 2 : Solution particulière ---\n");
    printf("✅ (x₀, y₀) = (%d, %d)\n", x0, y0);

    // Étape 3 : écriture de la solution générale
    printf("\n--- Étape 3 : Solution générale ---\n");
    printf("x = %d + (%d/%d)k\n", x0, b, d);
    printf("y = %d - (%d/%d)k\n", y0, a, d);
    printf("avec k ∈ Z\n");

    printf("\n---------------------------------------\n");
    printf("Programme terminé avec succès ✅\n");
    printf("---------------------------------------\n");

    return 0;
}

