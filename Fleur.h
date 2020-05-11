#ifndef FLEUR_H
#define FLEUR_H
#include <iostream>
#include <string>
#include <vector>
#include "Plante.h"

class Chat: public Plante{
    protected:
    int _eclosion;
    int _fane;

    public:
    Fleur();
};
#endif
