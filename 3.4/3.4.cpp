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

	cout << ((x % 2 == 0) ? "even" : "odd" )<< endl;//연산자 우선순위때문에 괄호 확인 

	//conditional operator  (arithmetric if)
	//삼항연산자.
	bool onSale = true;

	//const int price =(onSale==true)?10 :100;//const로 쓸때 삼항연산자가 유용하게 쓰인다.  복잡할땐 쓰지말라.....

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
	//int z = (++x, ++y);//앞의 것을 계산하고 뒤의 것을 계산한뒤 뒤의 것이 나온다.  그런데 for문에서 많이 사용한다. 
	++x;
	++y;
	int z = y; //이게 일반적이긴 하다. 


	int a = 1, b = 10;
	z = (++a, a + b);
	cout << a << " " << b << " " << z << endl;



	//float a;
	//sizeof(a);
	//sizeof(float);

	return 0;
}