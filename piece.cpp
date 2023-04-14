#include "piece.h"


Piece::Piece(Position position, Couleur couleur, string nom) : position_(position), couleur_(couleur), nom_(nom) {}; 


bool Piece::couleurPareil(Piece& autre) const {
	return couleur_ == autre.getCouleur();
}

Position Piece::getPositionActuelle()
{
	return position_;
}

Couleur Piece::getCouleur()
{
	return couleur_;
}

string Piece::getNom()
{
	return nom_;
}
