#pragma once

#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Deck.h"
#include "Controller.h"

class Player {
public:
	Player();

	std::string GetName() { return name_; }
	Deck GetHand() { return hand_; }
	Controller GetController() { return controller_; }

	void SetName(std::string name);
	void SetHand(Deck hand);
	void SetController(Controller controler);


private:
	std::string name_;
	Deck hand_;
	Controller controller_;
};






#endif PLAYER_H