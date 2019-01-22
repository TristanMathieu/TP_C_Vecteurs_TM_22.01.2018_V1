#ifndef VECTEUR_H_INCLUDED
#define VECTEUR_H_INCLUDED
#include "point.h"

// types
typedef struct tVecteur{
    tPoint pDepart;//Les coordonnées de départ de notre vecteur
    tPoint pArrivee;//Les coordonnées d'arrivée de notre vecteur
    tPoint pVect;//Les coordonnée vectorielle de notre vecteur, calculé par Bx - Ax et By - Ay
}tVecteur;

// prototypes
extern void initVec(tVecteur *monVec);
extern void addVec(tVecteur vect1, tVecteur vect2, tPoint *vectAddRes);
extern void sousVec(tVecteur vect1, tVecteur vect2, tPoint *vectSousRes);
extern void scal(tVecteur monVect, tPoint *resScal);

#endif // VECTEUR_H_INCLUDED
