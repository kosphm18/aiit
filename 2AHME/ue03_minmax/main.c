#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[100];
    int z1;
    int z2;
    int zmin;
    int zmax;


    printf("Min-Max-Berechnung\n");
    printf("------------------\n");

    printf("Zahl 1: ");
    fgets(s, 100, stdin);
    sscanf(s, "%d", &z1);

    printf("Zahl 2: ");
    fgets(s, 100, stdin);
    sscanf(s, "%d", &z2);



    if(z1 < z2) {

    printf("Zahl 1 ist kleiner als Zahl 2!");
    zmin = z1;
    zmax = z2;

    }

    else {

    if (z1 < z2)
        zmin = z1;
    else
        zmin = z3;

    printf("Zahl 1 ist größer als Zahl 2!");
    zmin = z2;
    zmax = z1;

    }

    printf("\nMinimum: %d\n", zmin);
    printf("\nMaximum: %d\n", zmax);

    return 0;
}
