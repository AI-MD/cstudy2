#include<stdlib.h>
#include<iostream>

namespace a {
	int my_var(10);
}

namespace b {
	int my_var(10);
}
int main() {
	//using std::cout;
	using namespace std;
	using namespace a;
	using namespace b;

	//cout << my_var << endl;

	return 0;
}