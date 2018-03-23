#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <time.h>
#include "Deck.h"

Deck::Deck() {
    Card temp_card;
    for(int i = 0; i < 4; i++) {
        for(int j = 1; j < 14; j++) {
            /*
            1 = Ace
            10 = 10
            11 = Jack
            12 = Queen
            13 = King
            */
            switch(j) { 
            case 1: 
                temp_card.set_card_number("A");
            break;
            case 10:
                temp_card.set_card_number("10");
            break;
            case 11:
                temp_card.set_card_number("J");
            break;
            case 12:
                temp_card.set_card_number("Q");
            break;
            case 13:
                temp_card.set_card_number("K");
            break;
            default:
            temp_card.set_card_number(std::to_string(j)); // needs "-std=c++11"
            break;
            }
                    
            switch(i) { // set card suits
            case 0:
                temp_card.set_card_suit("Clubs");
            break;
            case 1:
                temp_card.set_card_suit("Hearts");
            break;
            case 2:
                temp_card.set_card_suit("Diamonds");
            break;
            case 3:
                temp_card.set_card_suit("Spades");
            break;
            }
            deck.push_back(temp_card);
        }                
    }
}
void Deck::deck_out() {
    for(int i = 0; i < deck.size(); i++) {
        deck[i].card_out();
    }
}

void Deck::shuffle() {
    srand(time(NULL)); // randomize the seed every time it is called
    int pos;
    for(int i = deck.size() - 1; i > 0; i--) {
        pos = rand() % i;
        iter_swap(deck.begin() + i, deck.begin() + pos);
    }
}
