#include <stdio.h>


int main()
{

  char s[100]; //Definieren eines Character-Feldes (100 Zeichen)
  double z1;
  double z2;
  double summe;
  double differenz;
  double produkt;
  double quotient;

  printf("TASCHENRECHNER\n");
  printf("_______________\n\n");



  printf("Zahl 1: ");
  fgets(s, 100, stdin);   //stdin = Standardinput (Tastatur)
  sscanf(s, "%lf", &z1);    //Umwandlung Text zu Zahl
  //printf("%f", z1);

  printf("\nZahl 2: ");
  fgets(s, 100, stdin);
  sscanf(s, "%lf", &z2);
  //printf("%f", z2);

  printf("\n\nERGEBNIS\n");
  printf("___________");

  summe = z1 + z2;
  printf("\n\nDie Summe der beiden Zahlen ist %.4f", summe);

  differenz = z1 - z2;
  printf("\n\nDie Differenz der beiden Zahlen ist %.4f", differenz);

  produkt = z1 * z2;
  printf("\n\nDas Produkt der beiden Zahlen ist %.4f", produkt);

  quotient = z1 / z2;
  printf("\n\nDer Quotient der beiden Zahlen ist %.4f \n\n", quotient);

}
