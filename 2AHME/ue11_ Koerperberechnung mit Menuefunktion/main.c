#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double getInputIntegerValue (char text[]) {

    char s[100];
    int rv;
    int n;

    do {

        printf("%s", text);
        fgets(s, 100, stdin);
        n = sscanf(s, "%d", &rv);

    } while (n != 1);

    return rv;
}


double getInputDoubleValue (char text[]) {

    char s[100];
    int rv;
    double n;

    do {

        printf("%s", text);
        fgets(s, 100, stdin);
        n = sscanf(s, "%d", &rv);

    } while (n != 1);

    return rv;
}

double getSelectedMenu() {

    int rv;

    do{

        printf("--------------------------------------\n");
        printf("1 ... Wuerfel\n");
        printf("2 ... Quder\n");
        printf("3 ... Kugel\n");
        printf("4 ... Programm beenden\n");

        rv = getInputIntegerValue("\n Auswahl (1-4):  ");

    } while ( rv != 1 && rv != 2 && rv != 3 && rv != 4);

    return rv;
}

void calcCube() {

    double h;
    double f;
    double v;

        printf("Wuerfel: ");

    do{

        h = getInputDoubleValue("Laenge: ");

    } while (h > 0);

        f = 6 * (h * h);
        v = h * h * h;

        printf("Oberflaeche: %.2lf\n", f);
        printf("Volumen: %.2lf\n", v);

}

void calcCuboid() {

    double l, b, h;
        printf("Quader: ");

    do{

        l = getInputDoubleValue("Laenge: ");
        b = getInputDoubleValue("Breite: ");
        h = getInputDoubleValue("Hoehe: ");

    } while (l < 0 || b < 0 || h < 0);

    double v = l * b * h;
    double f = 2 * l * b + 2 * l * h + 2 * b * h;

        printf("Volumen: %.2lf\n", v);
        printf("Oberflaeche: %.2lf", f);

}

double calcSphere() {

    double d;
        printf("Kugel");

    do{

        d = getInputDoubleValue("Durchmesser: ");

    }while (d < 0);

    double r = d / 2;
    double v = (4 / 3) * M_PI * r * r * r;
    double f = 4 * M_PI * r * r;

        printf("Volumen: %.2lf\n", v);
        printf("Flaeche: %.2lf\n", f);

    return 0;
}

int main() {

    int wahl;

        wahl = getSelectedMenu();

    while (1){

    switch(wahl) {

    case 1: { calcCube();
    break; }
    case 2: { calcCuboid();
    break; }
    case 3: { calcSphere();
    break; }
    case 4: { return 0;
    }
}
    return 0;
}
}


