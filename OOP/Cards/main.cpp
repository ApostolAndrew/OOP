#include <iostream>
#include "Cards.h"
#include "Deck.h"

//http://www.math.uaa.alaska.edu/~afkjm/csce211/handouts/SeparateCompilation.pdf


int main() {
    Deck test;
    test.deck_out();
    test.shuffle();
    test.deck_out();
    return 0;
}