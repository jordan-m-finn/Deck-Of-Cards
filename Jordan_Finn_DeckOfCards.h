#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H

#include "Jordan_Finn_Card.h"

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

// Class for the deck of Card objects
class DeckOfCards
{
private:
	std::vector<Card> deck; // vector to represent the entire deck using the Card class
	int currentCard; // used to index the Card in the deck
	// Comment 5:
	// Remember, the face and suit integers defined in the Card class are used to piece
	// together the strings representing the faces and suits of the faces and suits arrays
	// respectively... while the currentCard integer is used to index the 'deck' of Card objects
	// with the Card objects being the faces and suits array's index combinations.

public:
	DeckOfCards(); // default constructor
	void shuffle(); // Card shuffler
	Card dealCard(); // returns a Card object from the deck vector
	bool moreCards(); // checks if there are more cards to deal
};

#endif