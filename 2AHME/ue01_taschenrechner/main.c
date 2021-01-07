#include <stdio.h>


int main(){

  char text[100]; //Definieren eines Character-Feldes (100 Zeichen)
  int z1;
  int z2;
  int summe;
  int differenz;
  int produkt;
  int quotient;

  printf("Mini-Taschenrechner\n");
  printf("-------------------\n\n");



  printf("Zahl 1: ");
  fgets(text, 100, stdin);   //stdin = Standardinput (Tastatur)
  sscanf(text, "%d", &z1);    //Umwandlung Text zu Zahl
  //printf("%f", z1);

  printf("Zahl 2: ");
  fgets(text, 100, stdin);
  sscanf(text, "%d", &z2);
  //printf("%f", z2);

  if(sscanf(text, "%d", &z2) != 1)
        printf("Lieber Benutzer, kennen Sie keine Zahlen!?\n");

  printf("\n\nERGEBNISSE\n");
  printf("------------");

  summe = z1 + z2;
  printf("\n\nSumme: %d", summe);

  differenz = z1 - z2;
  printf("\n\nDifferenz: %d", differenz);

  produkt = z1 * z2;
  printf("\n\nProdukt: %d", produkt);

  quotient = z1 / z2;
  printf("\n\nQuotient: %d", quotient);

}
