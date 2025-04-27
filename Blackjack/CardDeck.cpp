#pragma once
#include <random>
#include "CardDeck.h"

CardDeck::CardDeck() {
	shuffle();
}

CardDeck::~CardDeck() {

}

Card CardDeck::draw() {
	
	const int range_from = 0;
	const int range_to = cards.size()-1;
	std::random_device                  rand_dev;
	std::mt19937                        generator(rand_dev());
	std::uniform_int_distribution<int>  distr(range_from, range_to);

	int index = static_cast<int>(distr(generator));

	Card deltCard = cards[index];
	
	cards.erase(cards.begin() + index);

	//cout << "Dealing card: " << deltCard.value << " of " << deltCard.suit << endl;
	
	return deltCard;
}

void CardDeck::shuffle()
{
	cards.clear();
	cards.push_back(Card("Ace", "Hearts"));
	cards.push_back(Card("Two", "Hearts"));
	cards.push_back(Card("Three", "Hearts"));
	cards.push_back(Card("Four", "Hearts"));
	cards.push_back(Card("Five", "Hearts"));
	cards.push_back(Card("Six", "Hearts"));
	cards.push_back(Card("Seven", "Hearts"));
	cards.push_back(Card("Eight", "Hearts"));
	cards.push_back(Card("Nine", "Hearts"));
	cards.push_back(Card("Ten", "Hearts"));
	cards.push_back(Card("Jack", "Hearts"));
	cards.push_back(Card("Queen", "Hearts"));
	cards.push_back(Card("King", "Hearts"));

	cards.push_back(Card("Ace", "Diamonds"));
	cards.push_back(Card("Two", "Diamonds"));
	cards.push_back(Card("Three", "Diamonds"));
	cards.push_back(Card("Four", "Diamonds"));
	cards.push_back(Card("Five", "Diamonds"));
	cards.push_back(Card("Six", "Diamonds"));
	cards.push_back(Card("Seven", "Diamonds"));
	cards.push_back(Card("Eight", "Diamonds"));
	cards.push_back(Card("Nine", "Diamonds"));
	cards.push_back(Card("Ten", "Diamonds"));
	cards.push_back(Card("Jack", "Diamonds"));
	cards.push_back(Card("Queen", "Diamonds"));
	cards.push_back(Card("King", "Diamonds"));

	cards.push_back(Card("Ace", "Spades"));
	cards.push_back(Card("Two", "Spades"));
	cards.push_back(Card("Three", "Spades"));
	cards.push_back(Card("Four", "Spades"));
	cards.push_back(Card("Five", "Spades"));
	cards.push_back(Card("Six", "Spades"));
	cards.push_back(Card("Seven", "Spades"));
	cards.push_back(Card("Eight", "Spades"));
	cards.push_back(Card("Nine", "Spades"));
	cards.push_back(Card("Ten", "Spades"));
	cards.push_back(Card("Jack", "Spades"));
	cards.push_back(Card("Queen", "Spades"));
	cards.push_back(Card("King", "Spades"));

	cards.push_back(Card("Ace", "Clubs"));
	cards.push_back(Card("Two", "Clubs"));
	cards.push_back(Card("Three", "Clubs"));
	cards.push_back(Card("Four", "Clubs"));
	cards.push_back(Card("Five", "Clubs"));
	cards.push_back(Card("Six", "Clubs"));
	cards.push_back(Card("Seven", "Clubs"));
	cards.push_back(Card("Eight", "Clubs"));
	cards.push_back(Card("Nine", "Clubs"));
	cards.push_back(Card("Ten", "Clubs"));
	cards.push_back(Card("Jack", "Clubs"));
	cards.push_back(Card("Queen", "Clubs"));
	cards.push_back(Card("King", "Clubs"));
}