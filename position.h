#pragma once
#include <utility>


class Position
{
public: 
	Position(int col, int lin);
	std::pair <int, int> getPosition();
	const int getLigne(); 
	const int getColonne(); 
	
protected: 
	int col_;
	int lig_;
};

