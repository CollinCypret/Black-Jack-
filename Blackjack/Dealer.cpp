#include "Dealer.h"

Dealer::Dealer() {
	//playAgain();
	deck = CardDeck();
}


Dealer::~Dealer()
{
	
};


deque<Card> Dealer::initialDeal() {
	deltCards.clear();
	for (int i = 0; i < 2; i++) {
		deltCards.push_back(deck.draw());
	}
	return deltCards;
}

void Dealer::addToDeck(deque<Card> deltCards) {
	for (int i = 0; i < deltCards.size(); i++) {
		Cards.push_back(deltCards.at(i));
	}
	//cout << "\n\nDealer recieved: " << deltCards.at(0).value << " of " << deltCards.at(0).suit << "\n\n";
}

void Dealer::showCard() {
	cout << "\nDealer recieved: " << deltCards.at(0).value << " of " << deltCards.at(0).suit << "\n";
	deltCards.erase(deltCards.begin());
}

deque<Card> Dealer::deal() {
	deltCards.clear();
	deltCards.push_back(deck.draw());
	return deltCards;
}

bool Dealer::playAgain() {
	Cards.clear();
	
	cout << "\nWould you like to be delt in this hand? (Y or N) \n\n";
	char answer;
	cin >> answer;
	if (answer == 'y' || answer == 'Y')
	{
		return true;
	}
	return false;
}
int Dealer::getCardValue(Card card, int handValue) {
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

int Dealer::dealerCalculateHandValue() {
	int handValue = 0;
	for (int i = 0; i < Cards.size(); i++) {
		handValue += getCardValue(Cards.at(i), handValue);
	}
	return handValue;
}

void Dealer::result(int playerHandValue)
{
	if (handValue > playerHandValue && handValue < 22)
	{
		cout << "Your hand value is " << playerHandValue << endl;
		cout << "The dealers cards are worth " << handValue << " Points!" << endl;
		cout << "Dealer wins!";
	}
	else if (playerHandValue < 22)
	{
		cout << "Your hand value is " << playerHandValue << endl;
		cout << "The dealers cards are worth " << handValue << " Points!" << endl;
		cout << "Player wins!";
	}
	else if (playerHandValue > 21)
	{
		cout << "Your hand value is " << playerHandValue << endl;
		cout << "The dealers cards are worth " << handValue << " Points!" << endl;
		cout << "You busted \nDealer wins!";
	}
	else
	{
		cout << "Your hand value is " << playerHandValue << endl;
		cout << "The dealers cards are worth " << handValue << " Points!" << endl;
		cout << "Its a standoff (draw).";
	}
}