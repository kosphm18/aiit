#include <stdio.h>
#include <stdlib.h>

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

    int f1;
    int f2;
    double ra, rb, rc;
    double rab, rac, rbc;

    f1 = wandleDreieckInStern(10, 15, 20, &ra, &rb, &rc);
    f2 = wandleSternInDreieck(25, 30, 35, &rab, &rac, &rbc);

    return 0;
}
