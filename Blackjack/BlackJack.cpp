#pragma once

#include "BlackJack.h"


BlackJack::BlackJack() 
{ 

}

BlackJack::~BlackJack()
{

}

void BlackJack::addToDeck(deque<Card> deltCards)
{
	for (int i = 0; i < deltCards.size(); i++)
	{
		Cards.push_back(deltCards.at(i));
		cout << "\nPlayer recieved: " << deltCards.at(i).value << " of " << deltCards.at(i).suit;
	}
}

int BlackJack::getCardValue(Card card, int handValue)
{
	int value = 0;

	if (card.value == "Ace" && handValue + 11 < 22) 
	{ 
		value = 11; 
	}
	else
	{
		value = 1;
	}
	if (card.value == "Two") { value = 2; }
	if (card.value == "Three") { value = 3; }
	if (card.value == "Four") { value = 4; }
	if (card.value == "Five") { value = 5; }
	if (card.value == "Six") { value = 6; }
	if (card.value == "Seven") { value = 7; }
	if (card.value == "Eight") { value = 8; }
	if (card.value == "Nine") { value = 9; }
	if (card.value == "Ten") { value = 10; }
	if (card.value == "Jack") { value = 10; }
	if (card.value == "Queen") { value = 10; }
	if (card.value == "King") { value = 10; }
	return value;
}

int BlackJack::calculateHandValue()
{
	int handValue = 0;
	for (int i = 0; i < Cards.size(); i++) {
		handValue += getCardValue(Cards.at(i), handValue);
	}
	return handValue;
}
void BlackJack::discard()
{
	Cards.clear();	
}


