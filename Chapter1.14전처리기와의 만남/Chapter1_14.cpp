#include <iostream>



#define MY_NUMBER "Hello, World" //메크로 문서편집 교체기능
#define MAX(a,b)((a>b) ? a:b)
#define LIKE_APPLE  //이 안에서만 효과가 있음 

void doSomething();

int main()
{
	doSomething();

	//cout << MAX(1+3,2)<< endl;
	
	//cout << std::max(1+3,2) << endl;
	return 0;
}