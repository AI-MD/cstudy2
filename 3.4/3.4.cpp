#include <iostream>


int getPrice(bool onSale)
{
	if (onSale)
		return 10;
	else
		return 100;
}

int main()
{
	using namespace std;


	int x = 5;

	cout << ((x % 2 == 0) ? "even" : "odd" )<< endl;//������ �켱���������� ��ȣ Ȯ�� 

	//conditional operator  (arithmetric if)
	//���׿�����.
	bool onSale = true;

	//const int price =(onSale==true)?10 :100;//const�� ���� ���׿����ڰ� �����ϰ� ���δ�.  �����Ҷ� ��������.....

	const int price = getPrice(onSale);


	/*
	
	if (onSale)
		price = 10;
	else
		price= 100;
		*/

	cout << price << endl;






	// comma operator

	int x = 3;
	int y = 10;
	//int z = (++x, ++y);//���� ���� ����ϰ� ���� ���� ����ѵ� ���� ���� ���´�.  �׷��� for������ ���� ����Ѵ�. 
	++x;
	++y;
	int z = y; //�̰� �Ϲ����̱� �ϴ�. 


	int a = 1, b = 10;
	z = (++a, a + b);
	cout << a << " " << b << " " << z << endl;



	//float a;
	//sizeof(a);
	//sizeof(float);

	return 0;
}