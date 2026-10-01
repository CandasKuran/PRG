/* ---------------------------
Laboratoire : 02
Auteur(s) : Candas Kuran
Date : 01.10.2026
But : Calcul du temps de trajet
Remarque(s) :
--------------------------- */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Données du problème
    const double DX = 3.0;    // distance entre la route et l'objet [km]
    const double DY = 10.0;   // distance de la route [km]
    const double S1 = 5.0;    // vitesse la route [km/h]
    const double S2 = 2.0;    // vitesse le terrain [km/h]

    // manuel calcul
    //const double L1 = 6.0;    // distance parcourue sur la route [km]

    // bonus!
    double L1;
    cout << "Entrez L1 (km) : ";
    cin >> L1;


    // Segment 1 : pour la route
    double t1 = L1 / S1;

    // Segment 2 : pour le terrain rocheux (hypoténuse du triangle rectangle)
    double L2 = sqrt(DX * DX + (DY - L1) * (DY - L1));
    double t2 = L2 / S2;


    double tempsTotal = t1 + t2;

    cout << tempsTotal << endl;

    return 0;
}