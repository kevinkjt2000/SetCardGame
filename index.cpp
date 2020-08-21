#include <iostream> 
#include <vector>

using std::string;
using std::vector;

class Card {
    public:
        string color;
        string texture;
        string shape;
        string quantity;
};

int main() {
    vector<Card> cards;
    for(string color : {"green", "purple", "red"}) {
        for(string quantity : {"1", "2", "3"}) {
            for(string shape : {"curvy", "diamond", "oval"}) {
                for(string texture : {"empty", "filled", "shaded"}) {
                    Card card;
                    card.color = color;
                    card.quantity = quantity;
                    card.shape = shape;
                    card.texture = texture;
                    cards.push_back(card);
                }
            }
        }
    }
}