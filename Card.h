#pragma once

#include "common.h"

class Card
{
public:
	Card(int cardNum); // �R���X�g���N�^

	bool operator==(Card& other);

	void showCard(int* _hand, int i);

protected:
	int suit;
	int number;
};