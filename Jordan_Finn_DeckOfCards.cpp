#include "Jordan_Finn_DeckOfCards.h"

#include <iostream>
#include <cstdlib>
#include <ctime>

// Comment 6:
// This is the default constructor for the DeckOfCards class that
// initializes the deck vector with Card objects of the face and suit
// string values (defined in the Card class) in order of definition.
// Note, the size does not change (4 and 13) of the suits and faces
// arrays because it was defined to have a set number of possible suits
// and possible faces.
DeckOfCards::DeckOfCards() : currentCard(0)
{
	for (int suit = 0; suit < 4; ++suit)
	{
		for (int face = 0; face < 13; ++face)
		{
			deck.push_back(Card(face, suit));
		}
	}
}

// Comment 7:
// This function shuffles the deck vector with the Card objects so that
// the faces and suits arrays have different combinations depending
// on the deck vector indices using the 'ctime' library functions, srand and rand().
void DeckOfCards::shuffle()
{
	srand(time(0)); // Rand number generator

	for (int i = deck.size() - 1; i > 0; --i)
	{
		int j = rand() % (i + 1); // generates a random index
		std::swap(deck[i], deck[j]); // Swap the cards at indices i and j
	}
}

// Comment 8:
// This function returns deck indices using the currentCard index value and
// increments this value based on if there are Card objects left in the vector
// using the function, moreCards(), thus 'hopefully' returning all 52 card
// combinations.
Card DeckOfCards::dealCard()
{
	if (moreCards()) // If there are cards left then return the next card
	{
		return deck[currentCard++];
	}
	else
	{
		throw std::runtime_error("No more cards in the deck."); // If the deck happens to be out of cards...
	}
}

// Comment 9:
// This function, used by the dealCards() function above, compares the currentCard
// index value to the size of the deck vector and returns a bool value to determine
// if the deck vector is empty or not.
bool DeckOfCards::moreCards()
{
	return currentCard < deck.size(); // Returns true if there's more cards, false otherwise
}