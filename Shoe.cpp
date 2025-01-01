#include "Shoe.h"
#include <iostream>
#include <random> //��������

using namespace std;

//�V���b�t���i�t�B�b�V���[�C�F�[�c�j
void Shoe::_shuffle()
{
	for (int i = _cardNum; i > 1; --i) {
		int a = i - 1;
		int b = rand() % i;
		swap(_cardShoe[a], _cardShoe[b]);
	}
}

//�R���X�g���N�^
Shoe::Shoe() {

	_initCardShoe();
}

//�R���X�g���N�^
void Shoe::_initCardShoe() {

	//�J�[�h�����Ă�0.... /52�Ńf�b�L�A�����/13�ŃJ�[�h��ނƂ���
	_cardNum = CARD_NUM; //�J�[�h�����̐ݒ�
	for (int i = 0; i < _cardNum; i++) {
		_cardShoe[i] = i;
	}

	//�V���b�t��
	_shuffle();
}

//�J�[�h�V���[��\��(�f�o�b�O�p)
void Shoe::showShoe(SHOW_TYPE type) const
{
	int roopCnt = CARD_NUM;
	if (type == CARD_ONLY) {	//�J�[�h�������\��
		//�J�[�h�̂ݕ\���ɂ���B
		roopCnt = _cardNum;
	}

	for (int i = 0; i < roopCnt; i++) {
		cout << _cardShoe[i] << ' ';
	}
	cout << endl;
}

//�J�[�h��1�����o��
int Shoe::takeCard() {
	// �����납������Ă����������W�b�N�I�Ɋy
	_cardNum--;
	int card = _cardShoe[_cardNum];
	_cardShoe[_cardNum] = -1;	//��[-1�����Ƃ����B

	if (_cardNum <= 0) {
		//�J�[�h�������Ȃ����玟�̃J�[�h������
		_initCardShoe();
	}

	//�v�f��Ԃ�l�Ƃ���
	return card;

}
