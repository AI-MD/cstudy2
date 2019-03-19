#include<iostream>
#include<bitset>


int main() {

	using namespace std;
	
	const unsigned char op0 = 1 << 0;
	const unsigned char op1 = 1 << 1;
	const unsigned char op2 = 1 << 2;
	const unsigned char op3 = 1 << 3;
	
	cout << bitset<8>(op0) << endl;
	cout << bitset<8>(op1) << endl;
	cout << bitset<8>(op2) << endl;
	cout << bitset<8>(op3) << endl;

	unsigned char items_flag = 0;



	cout << " No Item "<< bitset<8>(items_flag) << endl;


	//item0 On
	items_flag |= op0;
	cout << " item0 Obtained " << bitset<8>(items_flag) << endl;
	
	//item3 On
	items_flag |= op3;
	cout << " item3 Obtained " << bitset<8>(items_flag) << endl;
	
	//item3 lost
	items_flag &= ~op3;
	cout << " item3 lost " << bitset<8>(items_flag) << endl;

	//has item1 

	if (items_flag & op1) {
		cout << "has item1" << endl;
	}
	if (items_flag & op0) {
		cout << "has item0" << endl;
	}
	

	//obtain op2,op3
	items_flag |= (op2 | op3);
	cout << bitset<8>(op2 | op3) << endl;
	cout << " item2, 3 Obtained " << bitset<8>(items_flag) << endl;


	if ((items_flag & op2) &&! (items_flag & op1)) {
		items_flag ^= op2;
		items_flag ^= op1;
	}
	cout << bitset<8>(items_flag) << endl;





	//glClear(~ |~);

	/*
	bool item1_flag = false;
	bool item2_flag = false;
	bool item3_flag = false;
	bool item4_flag = false;
	*/

	//...

	//invokeEvent(..)

	//
	////event!
	//item1_flag = true;
	////die! item2 los

	//item2_flag = false;

	//if (item3_flag == true) {
	//	//event
	//}
	//if (item3_flag == true) {
	//	item3_flag = false;
	//	item4_flag = true;
	//}


	return 0;
}