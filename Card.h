#pragma once

#ifndef CARD_H
#define CARD_H



class Card {
public:
	enum class Ranks
	{
		Two,
		Tree,
		Four,
		Five,
		Six,
		Seven,
		Eight,
		Nine,
		Ten,
		Jack,
		Queen,
		King,
		Ace
	};

	enum class Suits 
	{
		Hearts,
		Diamonds,
		Clubs,
		Spades
	};

	Card();
	Card(Suits suit, Ranks rank);

	Ranks Rank()const;
	Suits Suit()const;

private:
	Ranks rank_;
	Suits suit_;
};






#endif CARD_H