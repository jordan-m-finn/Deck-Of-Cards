#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <array>

// Class for cards
class Card
{
private:
	int face; // index number for face cards
	int suit; // index number for suit of cards
	static std::array<std::string, 13> const faces; // array for faces
	static std::array<std::string, 4> const suits; // array for suits

public:
	// default constructor
	Card(int, int);

	// int-to-string converter
	std::string toString() const;
};

#endif