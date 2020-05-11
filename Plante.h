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
    int _maturite;
    int _maturiteMax;
    std::string _name;
  public:
    void virtual inspecter();
    Plante(std::string nom);
    int inspecter();
};


#endif
