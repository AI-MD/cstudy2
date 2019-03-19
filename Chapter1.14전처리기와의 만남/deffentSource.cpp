#include <iostream>
#include <algorithm>


void doSomething()
{

	using namespace std;
#ifdef LIKE_APPLE
	cout << "APPLE" << endl;

	//#endif // 
#else
	//#ifndef LIKE_APPLE
	cout << "Orange" << endl;
#endif 


}