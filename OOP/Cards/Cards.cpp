#include <iostream>

#include "Cards.h"
#include "Deck.h"

void Card::set_card_number(std::string number) {
    card_number = number;
}
void Card::set_card_suit(std::string suit) {
    card_suit = suit; 
}
void Card::card_out() {
    std::cout << card_number << " " << card_suit << std::endl;
}