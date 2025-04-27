#pragma once

#include "card.h"
#include <deque>


class CardDeck {

public:
	CardDeck();
	~CardDeck();
	Card draw();
	void shuffle();
	std::deque<Card> cards;

private:

};