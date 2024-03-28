#pragma once


#ifndef GAME_H
#define GAME_H

#include <string>
#include <vector>

#include "Rules.h"
#include "Player.h"
#include "GameDesk.h"


class Game {
public:
	std::vector<std::string>PlayerType();
	std::vector<std::string>GameType();

	void Init();
	//метод не позволяет добавлять игроков с одинаковыми именами
	void Add(std::string plauerType, std::string name);
	void Set(std::string gameType);

	//тут подробнее опишем состав  возврата
	std::vector<std::pair<std::string, std::string>> CurrentPlayers();

	void ChangeName(std::string newName, std::string oldName);

	void Play();

	const GameDesk& CurrentEnvirement()const;


private:
	GameDesk desk_;
	Rules* rules_;

};






#endif // !GAME_H
