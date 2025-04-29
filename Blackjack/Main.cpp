#include "Card.h"
#include "CardDeck.h"
#include "Dealer.h"
#include "BlackJack.h"

// Author:  Collin Cypret
// Date:    4/27/2025

int main()
{
    CardDeck CurrentDeck = CardDeck();
    Card Card;
    Dealer Dealer;
    BlackJack Player;
    
  
    cout << "Welcome to the blackjack card game! \n";
    char answer;
    while (Dealer.playAgain()) {
        Player.addToDeck(Dealer.initialDeal());                         // Deal 2 cards to player.
        Dealer.addToDeck(Dealer.initialDeal());                 // Deal 2 cards to Dealer.
        Dealer.showCard();                                              // Dealer shows one of their cards.
        int PlayerHandValue = Player.calculateHandValue();              // Player determines value of hand.       
        cout << "\nYour hand value is " << PlayerHandValue << endl;
        while (PlayerHandValue < 22) {                                  
            cout << "Would you like another card? (Y or N) \n\n";
            cin >> answer;
            if (answer == 'Y' || answer == 'y') {
                Player.addToDeck(Dealer.deal());                        // Deal player 1 card.
                PlayerHandValue = Player.calculateHandValue();          // Player determines value of hand.  
                cout << "\nYour hand value is " << PlayerHandValue << endl;
            }
            else 
            {
                Dealer.showCard();                                      // Dealer shows their other card.
                break;
            }
        }
        int DealerHandValue = Dealer.dealerCalculateHandValue();        // Dealer determines value of hand.  
        if (DealerHandValue < 17) {
            cout << "The dealers cards are worth " << DealerHandValue << " Points!";
            while (DealerHandValue < 17)
            {
                Dealer.addToDeck(Dealer.deal());
                DealerHandValue = Dealer.dealerCalculateHandValue();    // Dealer determines value of hand. 
                Dealer.showCard();                                      // Dealer shows new card.
            }
        }
        Dealer.result(PlayerHandValue, DealerHandValue);                                // Determine who won.
        Player.discard();                                              // Player discards hand.
    }
}    
