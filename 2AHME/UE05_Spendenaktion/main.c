#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[80];
    double einkommen, spende;

    int auswahl;

    printf("Spendenaktion\n"
         "=============\n\n");

    printf("Moechten Sie etwas spenden? [1...Ja, 0...Nein]");
    fgets(s,80,stdin);
    sscanf(s,"%d",&auswahl); fflush(stdin);

    switch(auswahl)
    {
        case 0:
            printf("\nSchade, dass Sie nicht Spenden möchten!\n");
            break;
        case 1:

            printf("Geben Sie bitte Ihr Gehalt an: ");
            fgets(s,80,stdin);
            sscanf(s,"%lf",&einkommen);
            fflush(stdin);

            if (einkommen<=2000.0)
                spende=einkommen*0.005;
            else
            {
                if (einkommen<=4000.0)
                    spende=einkommen*0.01;
                else
                    spende=50.0;
            }

            printf("\nDie Spende betraegt %.2lf Euro", spende);
            printf("\nVielen Dank fuer Ihre Spende! Das Christkind wird Sie ganz sicher besuchen!\n");
            break;
        default:
            printf("\nKeine gültige Eingabe!\n");
            break;
    }
    return 0;
}
