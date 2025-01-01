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
	//�W���o��
	cout << "card: ";

	//�J�[�h�̎��(�X�y�[�h,�n�[�g,�_�C��,�N���u)��T��
	int type = (_hand[i] % 52) / 13; //�f�b�L���Ƃɕ�������,13�Ŋ�������(0-3)��4��ނ𕪊�

	//�W���o��
	const char* strType[] = { "s", "h", "d", "c" };
	cout << strType[type];
	cout << _hand[i] % 13 + 1 << ' ';
}