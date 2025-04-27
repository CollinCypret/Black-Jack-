#pragma once
#include "Card.h"
#include "BlackJack.h"

class Dealer {
public:
	Dealer();
	~Dealer();
	int handValue;
	bool playAgain();
	int getCardValue(Card card, int handValue);
	int calculateHandValue();
	deque<Card> initialDeal();
	void addToDeck(deque<Card> deltCards);
	void showCard();
	deque<Card> deal();
	int dealerCalculateHandValue();
	void result(int playerHandValue);
private:
	deque<Card> deltCards;
	deque<Card> Cards;
	CardDeck deck;
};