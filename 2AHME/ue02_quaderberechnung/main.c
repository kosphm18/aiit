#include <stdio.h>
#include <math.h>
int main()
{
    char text[100];
    double l;
    double b;
    double h;
    double volumen;
    double oberflaeche;
    double raumdiagonale;
    double flaechendiagonale;

    printf("Quaderrechner\n");
    printf("-------------\n\n");



    printf("Laenge: ");
    fgets(text, 100, stdin);
    sscanf(text, "%lf", &l);

    if(sscanf(text, "%lf", &l) != 1)
        printf("Ungueltige Angabe!\n");

    printf("Breite: ");
    fgets(text, 100, stdin);
    sscanf(text, "%lf", &b);

    if(sscanf(text, "%lf", &b) != 1)
        printf("Ungueltige Angabe!\n");

    printf("Hoehe: ");
    fgets(text, 100, stdin);
    sscanf(text, "%lf", &h);

    if(sscanf(text, "%lf", &h) != 1)
        printf("Ungueltige Angabe!\n");

    printf("\n\nERGEBNISSE\n");
    printf("------------");

    volumen = l * b * h;
    printf("\n\nVolumen: %lf", volumen);
    printf(" m^3");

    oberflaeche = 2 * l * b + 2 * l * h + 2 * b * h;
    printf("\n\nOberflaeche: %lf", oberflaeche);
    printf(" m^2");

    raumdiagonale = sqrt(l * l + b * b);
    printf("\n\nRaumdiagonale: %lf", raumdiagonale);
    printf(" m");

    flaechendiagonale = sqrt(l * l + b * b + h * h);
    printf("\n\nFlaechendiagonale: %lf", flaechendiagonale);
    printf(" m");

    return 0;
}
