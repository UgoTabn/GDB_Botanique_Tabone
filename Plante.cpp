#ifndef PLANTE_CPP
#define PLANTE_CPP

#include <string>
#include "Plante.h"
#include <iostream>

//int _cout; int _revente; int _engrais; int _taille; int _sante; int _eau, int _maturite; int _maturiteMax; std::string _name;
//void virtual inspecter(); Plante(std::string _name);
//int inspecter();


    void Plante::inspecter(){
        std::cout << "Espece : " <<_name << " Prix : " << _cout << " Prix de revente : " << _revente << " Sante : " << _sante << " Eau : " << _eau << " Maturite : " << _maturite << std::endl;
    }

    void Plante::mettreEngrais(){
    std::cout << "Vous mettez de l'engrais." << std::endl;
    _engrais = 1;
    _maturite += 1;
    std::cout << "Maturite : " << _maturite << std::endl;
}
    void Plante::arroser(){
    std::cout << "Vous arrosez la plante." << std::endl;
    _eau += 1;
    std::cout << "Eau : " << _eau << std::endl;
}
    void Plante::tailler(){
    std::cout << "Vous tailler la plante." << std::endl;
    _taille += 1;
    std::cout << "Taille : " << _taille << std::endl;
}
    void Plante::finTourSante(){
    if(_eau < 2 ){_sante -= 1;};
    if(_taille < 2 ){_sante -= 1;};
    }
    void Plante::finTour(){
    if(_sante > 4){_maturite+=2;};
    if(_sante < 4 ){_maturite+=1;};
    _engrais = 0; //utilisable une fois par tour
    }



    Plante::Plante():
          _cout(10), _revente(15), _engrais(0), _taille(0), _eau(0),  _sante(5), _maturite(0), _maturiteMax(5),_name("Sempervivum tectorum"){}
#endif
