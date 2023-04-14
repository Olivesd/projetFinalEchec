#pragma once
#include "position.h"
#include "couleur.h"
#include <string>
using namespace std; 

class Piece
{
public: 
	Piece(Position position, Couleur couleur, string nom); 
	virtual bool mouvementValide(Position position) = 0; 
	//bool caseValide()
	bool couleurPareil (Piece& other) const;
	Position getPositionActuelle(); 
	Couleur getCouleur();
	string getNom(); 

private: 
	Position position_; 
	Couleur couleur_;
	string nom_; 
	
};

