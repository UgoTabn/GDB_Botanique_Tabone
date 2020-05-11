#ifndef PLANTE_H
#define PLANTE_H

#include <string>

class Plante{
  protected:
    int _cout;
    int _revente;
    int _engrais;
    int _taille;
    int _sante;
    int _eau;
    int _maturite;
    int _maturiteMax;
    std::string _name;
  public:
    void virtual inspecter();
    void mettreEngrais();
    void arroser();
    void tailler();
    void finTourSante();
    void finTour();

    Plante();
};


#endif
