#include <iostream>
/*
	�Ϻ�c++11�� �߰��� ���뵵 �ٷ�
*/

int main() {
	using namespace std;
	
	float pi = 3.14f; //�̷� ������ ���ͷ�.... double�϶� �ڿ� ��
	int i = 1234u;//u�� unsigned�� �Ǿ����.... ���� ĳ������ �ϴ°��� ����. 

	int x = 12;//�տ� 0�� ���̸� 8����
	int x_8 = 012;
	int x_16 = 0xF;

	cout << x_8 << endl;
	cout << x_16 << endl;

	 x = 0b1010;
	cout << x << endl;
	x = 0b1011'1111'1010;
	cout << x << endl;
	//const float pi = 3.14;//�ɺ�..������ �� ���� ���� 



	return 0;
}