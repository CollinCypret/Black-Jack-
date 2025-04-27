
#pragma once
#include "Card.h"

Card::Card() {

}

Card::Card(std::string value, std::string suit) :
	suit{suit},
	value{value}
{

}

