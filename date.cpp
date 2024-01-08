#include "date.h"
#include <ctime>
#include <iostream>
#include <cassert>



Date::Date(int jour, int mois, int annee):_jour(jour),_mois(mois),_annee(annee){
    bool status = isDate(jour,mois,annee);
    assert(status && "Date non valide");
}

int Date::jour() {
    return _jour;
}

int Date::mois() {
    return _mois;
}

int Date::annee() {
    return _annee;
}

bool Date::isDate( int jour,int mois,int annee) {
time_t actuel = std::time(nullptr);
tm* ptime= std::localtime(&actuel);
if((ptime->tm_year +1900) > annee) return false;
    if ((jour < 1) || (jour>31)) return false;
    if ((mois <1) || (mois>12)) return false;
    if ((mois == 2) && (jour > 28)) return false;
    if (((mois == 4) || (mois == 6) || (mois == 9) || (mois == 11)) && (jour > 30)) return false;
    return true;


}
