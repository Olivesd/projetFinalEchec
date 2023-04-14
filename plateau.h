#pragma once
#include "piece.h"
#include <map>
using namespace std; 

class Plateau
{	
public: 
	Plateau(); 
	void ajouterPiece(Piece* p, Position positionApres); 
	void enleverPiece(Piece* p);
	void bougerPiece(Position positionApres);
	bool caseVide(Position position);
	bool estEnEchec(Couleur couleur);
	bool aucunePieceEntre(Position position1, Position position2);
	Piece getPiece(Position positiion); 
	//Couleur quiJoue() pas sur
private: 
	map<Position, Piece> lesPieces;

};

