#include "Jordan_Finn_Card.h"
#include <iostream>

// Comment 1:
// This is the default constructor for the Card class that
// initializes the face and suit indexes.
Card::Card(int face, int suit) : face(face), suit(suit) {}

// Comment 2:
// This is an array of type string that stores the faces for the cards.
// This is set to a size of 13 and remains const to prevent data manipulation.
std::array<std::string, 13> const Card::faces = { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

// Comment 3:
// This is an array of type string that stores the suits of the cards.
// This is set to a size of 4 and remains const to prevent data manipulation.
std::array<std::string, 4> const Card::suits = { "Hearts", "Diamonds", "Clubs", "Spades" };

// Comment 4:
// Using the faces and suits arrays, combined with the face and suit index values,
// this returns a concatenated string that forms a name of particular face card
// with a particular suit. This is so that each of the 52 cards can be read by the
// function and is set to const so that it ONLY reads.
std::string Card::toString() const
{
	return faces[face] + " of " + suits[suit];
}