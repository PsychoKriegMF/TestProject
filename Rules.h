#pragma once

#ifndef RULES_H
#define RULES_H

#include <string>
#include <vector>

#include "Card.h"
#include "Player.h"
#include "Deck.h"
#include "GameDesk.h"
#include "Action.h"



//абстрактный класс
class Rules {
public:
	virtual Deck StartDeck() = 0; // возвращает стартовую колоду
	virtual void Initialdesk(GameDesk& obj) = 0; // первоначальная расстановка на поле
	virtual std::vector<std::string> Actions() = 0;
private:
	int minPlayers_;
	int maxPlayers_;
	std::string name_;
	int activePlayer_;
};

#endif // !RULES_H
