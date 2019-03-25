#include<iostream>
#define PRICE_PER_ITEM 30

#include "MY_CONSTANT.h"
using namespace std;

void printNumber(const int my_number) 
{
	//파라미터 바꿀때에는 안에서 해결
	
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
	int price = num_item * PRICE_PER_ITEM; //c++에선 이러한 메크로 사용하지않는다.
	int price_new = num_item * price_per_item;

	constexpr int my_const(123);//컴파일 환경에서 고정  

	int number;
	cin >> number;
	//런타임......시간에 결정 
	const int special_number(number);





	printNumber(123);

	const double gravity{ 9.8 }; //보통 const 앞에 붙인다.  상수는 반드시 초기화해야한다. 

	//gravity = 1.2; 이렇게 바꿀 수 없다.

	return 0;

}