#ifndef CARDS_H_
#define CARDS_H_

/*
Cards have one number and one suit
suits are clubs, diamonds, hearts, spades
*/


class Card {
    protected:
        std::string card_number;
        std::string card_suit;
    public:
        void set_card_number(std::string number);
        void set_card_suit(std::string suit);
        void card_out();
};

#endif 