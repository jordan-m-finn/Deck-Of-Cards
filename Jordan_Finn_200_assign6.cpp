#include "Jordan_Finn_Card.h"
#include "Jordan_Finn_DeckOfCards.h"
#include <iostream>

int main()
{
	try
	{
		// Comment 10:
		// This initializes a DeckOfCards object, userDeck, and then accesses the public member function of that class,
		// shuffle(), to shuffle the deck vector's values (see function definition in 'DeckOfCards.cpp').
		// Then the shuffled deck is checked by the moreCards function (see function definition in 'DeckOfCards.pp').
		// If there are more cards in the deck, a Card object is created to store the values of the userDeck read and
		// returned by the dealCard function (see function definition in 'DeckOfCards.cpp') to then access and display
		// each Card object intialized with the userDeck, DeckOfCards, object string values, using the
		// toString() function (see function definition in 'Card.cpp') to effectively display all 52 randomized
		// card combinations.
		DeckOfCards userDeck; // Creates a DeckOfCards object
		userDeck.shuffle(); // Shuffles the deck
		while (userDeck.moreCards())
		{
			Card card = userDeck.dealCard(); // Deals a card from the DeckOfCards deck vector object and passes that 'value' to the Card card object
			std::cout << card.toString() << std::endl;
		}
	}
	// Comment 11:
	// If there are any runtime errors this catches them and displays the appropriate source.
	catch (const std::runtime_error& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}