#pragma once
#include "CardDeck.h"
#include "Card.h"
#include "Dealer.h"
#include "CardDeck.h"
class BlackJack {
public:
	int handValue;
	BlackJack();
	~BlackJack();
	void addToDeck(deque<Card>);
	int getCardValue(Card, int handValue);
	int calculateHandValue();
	void discard();
	
	deque<Card> Cards;

private:

};
