#include <iostream>


using namespace std;
//int a = 1;

void doSomething() {
	static int a = 1;
	++a;
	cout << a << endl;
}

int main() {
	doSomething();
	doSomething();
	doSomething();
	doSomething();

	
}