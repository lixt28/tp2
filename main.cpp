#include "date.h"
#include <iostream>

int main(){
    Date d1(8,1,2024);
    Date d2(9,12,2023);
    Date d3(28,2,2024);

    std::cout << d1.jour() << std::endl
    << d2.annee() << std::endl
    << d3.mois() ;

    return 0;
}