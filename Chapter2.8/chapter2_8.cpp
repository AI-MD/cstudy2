#include <iostream>
/*
	일부c++11에 추가된 내용도 다룸
*/

int main() {
	using namespace std;
	
	float pi = 3.14f; //이런 변수를 리터럴.... double일땐 뒤에 ㅣ
	int i = 1234u;//u가 unsigned가 되어버림.... 차라리 캐스팅을 하는것이 낫다. 

	int x = 12;//앞에 0을 붙이면 8진수
	int x_8 = 012;
	int x_16 = 0xF;

	cout << x_8 << endl;
	cout << x_16 << endl;

	 x = 0b1010;
	cout << x << endl;
	x = 0b1011'1111'1010;
	cout << x << endl;
	//const float pi = 3.14;//심볼..변경할 수 없는 변수 



	return 0;
}