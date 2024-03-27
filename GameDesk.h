#pragma once

#ifndef GAMEDESK_H
#define GAMEDESK_H

#include <vector>

#include "Card.h"
#include "Deck.h"
#include "Player.h"


class GameDesk {
public:
	void SetStartDeck(Deck deck);  // ��������� ����� ������
	Deck GetTopCard(); // ������ ������� ����� ������
	Deck GetBottomCard();//������ ������ ����� ������

	int CurrentDeck(); //������� ���� �������� � ������

	void DraftCard(Card played);
	// � ���� ����� ������� ����� ��� �������� ������ ���� � �����

	void NewPlayer(Player obj); // �������� ������
	void KickPlayer(int position);// ������� ������

	Player& PlayerN(int position);

	int CurrentPlayers()const;

	void PlaceSlotN(Card card, bool visible, int position);
	void PlaceSlot(Card card, bool visible);

	Card SlotN(int position);

	int CurrentSlots()const;

	Card FreeSlot(int position);
	


private:
	Deck newCards_;
	Deck oldCards_;
	std::vector<Player> players_;

	class CardSlot {
	public:
		Card current_;
		bool visible_;
	};

	std::vector<CardSlot> deskCards_;
};


#endif // !GAMEDESK_H
