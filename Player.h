#pragma once

#ifndef PLAYER_H
#define PLAYER_H

#include <string>

#include "Deck.h"
#include "Controller.h"
#include "Action.h"
#include "GameDesk.h"

class iViewPlayer {
public:

};

class Player {
public:
	Player();

	Action Action(std::vector<Action>& Action, const iViewerDesk& env) {
		//return controller_->Action(action, env);
	}

	std::string GetName()const { return name_; }
	Deck GetHand() { return hand_; }
	Controller GetController() { return controller_; }

	void SetName(std::string name);
	void SetHand(Deck hand);
	void SetController(Controller controler);

	void Taik(Card obj);
	int CurrentCards()const;


private:
	std::string name_;
	Deck hand_;
	Controller controller_;
};






#endif PLAYER_H