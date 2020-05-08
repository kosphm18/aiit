#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int wandleDreieckInStern(double rab, double rac, double rbc, double *pRa, double *pRb, double *pRc){

    double pruefe = rac + rab + rbc;

if(pRa != NULL && pRb != NULL && pRc != NULL && rac + rab + rbc > 0){

    *pRa = (rac * rab) / pruefe;
    *pRb = (rab * rbc) / pruefe;
    *pRc = (rac * rbc) / pruefe;
    return 0;
}   else {
    return 1;
}

}

int wandleSternInDreieck(double ra, double rb, double rc, double *pRab, double *pRac, double *pRbc){

  if(pRab != NULL && pRac != NULL && pRbc != NULL && ra > 0 && rb > 0 && rc > 0){

    *pRab = (ra * rb + rb * rc + rc * ra) / rc;
    *pRac = (ra * rc + rb * rc + rc * ra) / rb;
    *pRbc = (rb * rc + rb * rc + rc * ra) / ra;
    return 0;

}   else{

    return 1;
}

}

int main(){

    const double eps = 1E-10;
    int rv;
    double ra, rb, rc;
    double rab, rac, rbc;

    //Test 1: wandleDreieckInStern
    rab = 1: rac = 2; rbc = 3;
    rv = wandleDreieckInStern(rab, rac, Rrc, &ra, &rb, &rc);
    if(rv != 0){
        printf("Test 1: Fehler rv = %d\n", rv);
}   else {
      // wenn eps = 0.1 -> ra = 0.23 ... 0.43 -> OK
      if((abs(ra - 0.33333333) <= eps && (abs(rb - 0.5) <= eps) && (abs(rc - 1.0) <= eps)){
        printf("OK:  ");
      } else {
          printf("ERROR:  ");
      }
      printf("rab = %lf, rac = %lf, = rbc = %lf -> ra = %lf, rb = %lf, rc = %lf\n", rab, tac, rbc, ra, rb, rc);
}
    return 0;

    //Test 2: wandleSternInDreieck
    ra = 1, rb = 2, rc = 3;
    rv =  wandleSternInDreieck(&rab, &rac, &rbc, ra, rb, rc);

    if(rv != 0){
        printf("Test 1 Fehler. rv = %d\n", rv);
}
