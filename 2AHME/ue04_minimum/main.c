#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[100];
    int z1;
    int z2;
    int z3;
    int zmin;


    printf("Minimum-Berechnung\n");
    printf("------------------\n");

    printf("Zahl 1: ");
    fgets(s, 100, stdin);
    sscanf(s, "%d", &z1);

    printf("Zahl 2: ");
    fgets(s, 100, stdin);
    sscanf(s, "%d", &z2);

    printf("Zahl 3: ");
    fgets(s, 100, stdin);
    sscanf(s, "%d", &z3);

    if(z1 < z2) {

    if (z1 < z3)
        zmin = z1;
    else
        zmin = z3;

    }
    else {

    if (z2 < z3)
        zmin = z2;
    else
        zmin = z3;

    }

    printf("\nMinimum: %d\n", zmin);

    return 0;
}
