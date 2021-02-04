#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[100];
    double r1;
    double r2;
    double i;
    double i1;
    double i2;
    int a = 0;
    int b = 0;
    int err;

    printf("Spannungsteiler_Rechner\n");
    printf("\n-----------------------\n\n");

    printf("Bitte geben Sie Ihre Werte an!\n");

    printf("Widerstand 1: ");
    fgets(s, 100, stdin);
    sscanf(s, "%lf", &r1);

    printf("Widerstand 2: ");
    fgets(s, 100, stdin);
    sscanf(s, "%lf", &r2);

    printf("Strom 1: ");
    fgets(s, 100, stdin);
    sscanf(s, "%lf", &i1);

    printf("Strom 2: ");
    fgets(s, 100, stdin);
    sscanf(s, "%lf", &i2);

    printf("Gesamtstrom: ");
    fgets(s, 100, stdin);
    sscanf(s, "%lf", &i);

    if (r1 > 0){
        a = a + 1;
    }
    if (r2 > 0){
        a = a + 1;
    }
    if (i1 > 0){
        b = b + 1;
    }
    if (i2 > 0){
        b = b + 1;
    }
    if (i > 0){
        b = b + 1;
    }

    // Berechnung des Fehlers
    if (a == 2){

        if (b == 1)
            err = 0;
        else
            err = 1;
    }
    else if (b == 2){

        if (b != 1)
            err = 1;
    }
    else
        err = 1;

    if (err)
        printf("Zu wenige oder zu viele Angaben. Die Berechnung kann nicht durchgefuehrt werden!");
    else if((a == 2) && (i1 > 0)){

    i2 = (i1 * r1) / r2;
    i = i1 + i2;
    printf("\nStrom 2: %3.lf", i2);
    printf("\nGesamtstrom: %3.lf\n\n", i);

    }
    else if ((a == 2) && (i2 > 0)) {

    i1 = (r2/r1) * i2;
    i = i1 + i2;
    printf("\nStrom 1: %3.lf", i1);
    printf("\nGesamtstrom: %3.lf\n\n", i);

    }
    else if ((a == 2) && (i > 0)) {

    i2 = i * r1 / (r1 + r2);
    i1 = i - i2;
    printf("\nStrom 2: %3.lf", i2);
    printf("\nStrom 1: %3.lf\n\n", i1);

    }
    else if ((b == 2) && (r1 > 0)) {

    i = i1 + i2;
    r2 = (i1 / i2) * r1;
    printf("\nGesamtstrom: %3.lf", i);
    printf("\nWiderstand 2: %3.lf\n\n", r2);

    }
    else if ((b == 2) && (r2 > 0)) {

    i = i1 + i2;
    r1 = (r2 / i2) * i1;
    printf("\nGesamtstrom: %3.lf", i);
    printf("\nWiderstand 2: %3.lf\n\n", r1);

    }
    return 0;
}
