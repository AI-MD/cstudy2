#include<iostream>
#define PRICE_PER_ITEM 30

#include "MY_CONSTANT.h"
using namespace std;

void printNumber(const int my_number) 
{
	//�Ķ���� �ٲܶ����� �ȿ��� �ذ�
	
	int n = my_number;

	cout << my_number << endl;
}

int main()
{
	double radius;
	cin >> radius;
	double circumference = 2.0 *radius*constants::pi;


	const int price_per_item = 30;

	int num_item = 123;
	int price = num_item * PRICE_PER_ITEM; //c++���� �̷��� ��ũ�� ��������ʴ´�.
	int price_new = num_item * price_per_item;

	constexpr int my_const(123);//������ ȯ�濡�� ����  

	int number;
	cin >> number;
	//��Ÿ��......�ð��� ���� 
	const int special_number(number);





	printNumber(123);

	const double gravity{ 9.8 }; //���� const �տ� ���δ�.  ����� �ݵ�� �ʱ�ȭ�ؾ��Ѵ�. 

	//gravity = 1.2; �̷��� �ٲ� �� ����.

	return 0;

}