#pragma once

#include "common.h"

class Card
{
public:
	Card(int cardNum); // コンストラクタ

	bool operator==(Card& other);

	void showCard(int* _hand, int i);

protected:
	int suit;
	int number;
};