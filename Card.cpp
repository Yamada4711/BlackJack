#include "Card.h"
#include <iostream>
using namespace std;

Card::Card(int cardNum)
{
	suit = cardNum / SUIT_NUM;
	number = cardNum % SUIT_NUM;
}

bool Card::operator==(Card& other)
{
	if (other.suit == suit && other.number == number) return true;
	return false;
}

void Card::showCard(int* _hand, int i)
{
	//標準出力
	cout << "card: ";

	//カードの種類(スペード,ハート,ダイヤ,クラブ)を探索
	int type = (_hand[i] % 52) / 13; //デッキごとに分けた後,13で割った数(0-3)で4種類を分割

	//標準出力
	const char* strType[] = { "s", "h", "d", "c" };
	cout << strType[type];
	cout << _hand[i] % 13 + 1 << ' ';
}