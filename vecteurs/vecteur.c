#include <stdio.h>
#include "vecteur.h"

// pcd/fct

/*-----------------------------------
 Descriptions : Procedure d'initialisation d'un Vecteur
 Entrées : Vecteur (non initialisé)
 Sorties : Vecteur (initialisé)
-----------------------------------*/

void initVec(tVecteur *monVec){
    printf("Creation d'un vecteur :\n");

    printf("Entrez X de votre depart : ");
    scanf("%f", &(*monVec).pDepart.nx);
    printf("Entrez Y de votre depart : ");
    scanf("%f", &(*monVec).pDepart.ny);
    printf("Entrez X de votre arrivee : ");
    scanf("%f", &(*monVec).pArrivee.nx);
    printf("Entrez Y de votre arrivee : ");
    scanf("%f", &(*monVec).pArrivee.ny);

    (*monVec).pVect.nx=(*monVec).pArrivee.nx-(*monVec).pDepart.nx;
    (*monVec).pVect.ny=(*monVec).pArrivee.ny-(*monVec).pDepart.ny;

    printf("Les coordonnees vectorielles sont :\nx : %0.2f\ny : %0.2f\n\n\n", (*monVec).pVect.nx, (*monVec).pVect.ny);
}

/*-----------------------------------
 Descriptions : Procedure d'addition de 2 vecteurs
 Entrées : Coord. Vectorielle de 2 vecteurs
 Sorties : Resultat addition
-----------------------------------*/

void addVec(tVecteur vect1, tVecteur vect2, tPoint *vectAddRes){
    (*vectAddRes).nx=vect1.pVect.nx+vect2.pVect.nx;
    (*vectAddRes).ny=vect1.pVect.ny+vect2.pVect.ny;

    printf("L'addition de ces deux vecteur est :\nx : %0.2f\ny : %0.2f\n\n", (*vectAddRes).nx, (*vectAddRes).ny);
}

/*-----------------------------------
 Descriptions : Procedure de soustraction de 2 vecteurs
 Entrées : Coord. Vectorielle de 2 vecteurs
 Sorties : Resultat soustraction
-----------------------------------*/

void sousVec(tVecteur vect1, tVecteur vect2, tPoint *vectSousRes){
    (*vectSousRes).nx=vect1.pVect.nx-vect2.pVect.nx;
    (*vectSousRes).ny=vect1.pVect.ny-vect2.pVect.ny;

    printf("La soustraction de ces deux vecteur est :\nx : %0.2f\ny : %0.2f\n\n", (*vectSousRes).nx, (*vectSousRes).ny);
}

/*-----------------------------------
 Descriptions : Procedure de multiplication par scalaire
 Entrées : Coord. Vectorielle et 1 scalaire
 Sorties : Resultat multiplication scalaire
-----------------------------------*/

/*
void scal(tVecteur monVect, tPoint *resScal){
    int monScal;

    printf("Choisissez un scalaire : ");
    scanf("%d", monScal);
    (*resScal).nx=(monVect.pVect.nx)*monScal;
    (*resScal).ny=(monVect.pVect.ny)*monScal;

    printf("Le scalaire du vecteur 1 avec votre scalaire est :\nx : %0.2f\ny : %0.2f\n\n", (*resScal).nx, (*resScal).ny);
}
*/
