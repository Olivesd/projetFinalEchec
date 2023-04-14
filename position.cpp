#include "position.h"
#include <utility>

Position::Position(int lin, int col) : lig_(lin), col_(col) {};

std::pair<int, int> Position::getPosition() //.first et .second pour acceder
{
	return { this->lig_, this->col_ };
}

const int Position::getLigne()
{
	return lig_;
}

const int Position::getColonne()
{
	return col_;
}
