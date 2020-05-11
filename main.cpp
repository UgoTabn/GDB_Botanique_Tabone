#include <iostream>
#include "Plante.h"
#include "Plante.cpp"
//#include "Fleur.h"
//include "Fleur.cpp"
#include <vector>
#include <string>

using namespace std;

int main()
{
int tour = 0;
int argent =0;
int jouer =0;
int nombrePlantes=1;
int choixAchat = 0;
int gestionPlante = 0;
int quellePlante = 0;
int memePlante = 1;
int choixGestion = 0;
Plante * PremierePlante = new Plante();
vector<Plante> ferme;
ferme.push_back(PremierePlante);

while(jouer = 0){
cout << "Vous avez " << nombrePlantes << "." << endl;
cout << "Vous avez " << argent << "GraineFlouz." << endl;

        //achat d nouvelle plantes
    if(argent >= 10){
    cout << "Vous avez assez pour acheter une plante, voulez vous l'acheter ? oui=1,non= autres chiffres" << endl;
    cin >> choixAchat;
        if(choixAchat = 1){cout << "Et une plante en plus !" << endl; Plante * NouvellePlante = new Plante();ferme.push_back(NouvellePlante);choixAchat =0;nombrePlantes+=1;}
    }

        //gestion des plantes
    cout << "Voulez vous gerer vos plantes ?oui=1,non= autres chiffres" << endl;
    cin >> gestionPlante;
    while(gestionPlantes=1){
    cout << "la quelle gerer ? Vous en avez " << nombrePlantes << "." << endl;
    cin >> quellePlante;
    ferme[quellePlante].inspecter();
    while(memePlantes=1){
    cout << "Que faire ?" << endl;
    cout << "1- Mettre engrais" << endl;
    cout << "2- Mettre eau" << endl;
    cout << "3- Tailler" << endl;
    cin >> choixGestion;
    if(choixGestion=1){ferme[quellePlante].mettreEngrais()}
    if(choixGestion=1){ferme[quellePlante].arroser()}
    if(choixGestion=1){ferme[quellePlante].tailler()}
    cout << "Faire d'autres choses sur la meme plante? oui=1,non= autres chiffres" << endl;
    cin >> memePlantes;
    }
    cout << "Inspecter d'autre plantes, ou terminer la journee? oui=1,non= autres chiffres" << endl;
    cin >> gestionPlante;
    }
for (int i = 0; i < fermesize(); i++) {
  ferme[i].finTourSante();
  ferme[i].finTour();
    if(ferme[i]_maturite > 5){
    ferme[i].destroy();
    argent += 15
    }

}









}
    return 0;
}

