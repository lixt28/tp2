#ifndef DATE_H
#define DATE_H
class Date{
    public:
        Date(int jour, int mois, int annee);
        int jour() ;
        int mois();
        int annee();
    private:
        int _jour;
        int _mois;
        int _annee;
        bool isDate(int jour, int mois, int annee);
};

#endif