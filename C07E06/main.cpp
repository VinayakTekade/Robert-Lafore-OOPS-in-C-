#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

enum Suit {clubs, diamonds, hearts, spades};

const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

class card
{
private:
    int number;
    Suit suit;
public:
    card()
    {}
    void Set(int n, Suit s)
    {
        suit=s;
        number=n;
    }
    void display()
    {
        if (number >=2 && number <= 10)
            cout<< number;
        else
            switch(number)
        {
            case jack: cout << 'J';
                        break;
            case queen: cout<<'Q';
                        break;
            case king: cout<<'K';
                        break;
            case ace: cout<<'A';
                        break;

        }
        switch(suit)
        {
            case clubs: cout<< char(5);
                                break;
            case diamonds: cout<< char(4);
                                break;
            case hearts: cout<< char(3);
                                break;
            case spades: cout<< char(6);
                                break;
        }
    }
};


int main()
{
    card deck[52];
    int j;
    cout<<endl;
    for(j=0;j<52;j++)
    {
        int num=(j%13)+2;           //Cycles through 2 to 14, 14 times
        Suit su= Suit(j/13);        //Cycles through 0 to 3, 13 times
        deck[j].Set(num,su);        //set card
    }
    cout << "\n Ordered Deck: \n";
    for(j=0;j<52;j++)
    {
        deck[j].display();
        cout<<" ";
        if(!(j+1)%13)
            cout<< endl;

    }
    srand(time(NULL));
    for(j=0;j<52;j++)
    {
        int k = rand() % 52;
        card temp =deck[j];
        deck[j]=deck[k];
        deck[k]=temp;
    }
    cout<<"\nShuffled Deck:\n";
    for(j=0;j<52;j++)
    {
        deck[j].display();
        cout<<", ";
        if(!(j+1)%13)
        cout<<endl;
    }
    return 0;
}
