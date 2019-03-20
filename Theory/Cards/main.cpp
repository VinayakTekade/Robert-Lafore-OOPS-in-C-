//Cards.cpp

#include <iostream>

using namespace std;

const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

enum Suit { clubs, diamonds, hearts, spades };

struct card
{
    int number;
    Suit suit;
};
int main()
{
    card temp, choosen, prize;
    int position = 1;

    card card1 = { 7, clubs };
    cout << "Card 1 is the Seven of Clubs \n" << endl;

    card card2 = { jack, hearts };
    cout << "Card 2 is the Jack of Hearts \n" << endl;

    card card3 = { ace, spades};
    cout << "Card 3 is the Ace of Spades \n" << endl << endl;

    prize = card3;

    cout << "Swapping card 1 and card 3" << endl << endl;
    temp = card1; card1 = card3; card3 = temp;

    cout << "Swapping card 2 and card 3" << endl << endl;
    temp = card2; card2 = card3; card3 = temp;

    cout << "Swapping card 1 and card 2" << endl << endl;
    temp = card1; card1 = card2; card2 = temp;

    cout << "Which one is ace of spades card (1, 2 or 3)" << endl;
    cin >> position;

    switch (position)
    {
        case 1 : choosen = card1; break;
        case 2 : choosen = card2; break;
        case 3 : choosen = card3; break;
    }

    if(choosen.number == prize.number && choosen.suit == prize.suit)
        cout << " \n Right Answer!";
    else
        cout << "\n Wrong Answer!";


    return 0;
}
