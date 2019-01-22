#include <stdio.h>
#include <stdlib.h>
#include "point.h"
#include "vecteur.h"

int main()
{
    tVecteur vect1;
    tVecteur vect2;
    tPoint vectAddRes;
    tPoint vectSousRes;
    //tPoint resScal;

    printf("Premier vecteur : \n\n");
    initVec(&vect1);
    printf("Second vecteur : \n\n");
    initVec(&vect2);

    addVec(vect1, vect2, &vectAddRes);
    sousVec(vect1, vect2, &vectSousRes);
    //scal(vect1, &resScal);
    return 0;
}
