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


