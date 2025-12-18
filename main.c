#include <stdio.h>
#include <stdio.h>

int main()

{
    int a,b,r;
   printf("Donner le premier nombre : ");
   scanf("%d", &a);
   printf("Donner le deuxieme nombre: ");
   scanf("%d", &b);

// Algorithme d'Euclide

while (b != 0) {

r = a % b;
printf("a=%d,b=%d,r=a%%b=%d\n",a,b,r);

a = b;

b = r;
}

// Affichage du résultat

printf("Le PGCD est: %d\n", a);
if(a==1){
printf("les deux nombres sont premiers entre eux");
}
    return 0;
}



