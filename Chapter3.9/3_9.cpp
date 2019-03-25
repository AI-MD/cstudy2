#include<iostream>

using namespace std;
#include <bitset>

int main()
{



	const unsigned char opt0 = 1 << 0;
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2 = 1 << 2;
	const unsigned char opt3 = 1 << 3;
	//opt 4,5,6,7
	cout << bitset<8>(opt0) << endl;
	cout << bitset<8>(opt1) << endl;
	cout << bitset<8>(opt2) << endl;
	cout << bitset<8>(opt3) << endl;


	unsigned char items_flag = 0;


	cout << bitset<8>(items_flag) << endl;
	//tem0 on
	items_flag |= opt0;

	cout <<"iten0 Obtained"<< bitset<8>(items_flag) << endl;

	//tem3 on
	items_flag |= opt3;

	cout << "iten3 Obtained" << bitset<8>(items_flag) << endl;


	//tem3 lost
	items_flag &=~ opt3;

	cout << "iten3 lost" << bitset<8>(items_flag) << endl;

	//has item1?
	if (items_flag &opt1) { cout << "has item1" << endl; }
	else { cout << "Not" << endl; }


	//has item0?
	if (items_flag &opt0) { cout << "has item1" << endl; }
	
	//obtain  item 2,3


	items_flag |= (opt2 | opt3);

	cout<< bitset<8>(opt2 | opt3) << endl;
	cout << "iten 2 3 Obtained" << bitset<8>(items_flag) << endl;

	if ((items_flag & opt2) && !(items_flag& opt1))
	{
		//items_flag ^= opt2;//상태를 바꿔줄때

		//items_flag ^= opt1;//상태를 바꿔줄때
		items_flag ^= (opt2 | opt1);
	}
	cout << "end" << bitset<8>(items_flag) << endl;

	/*
	
	 bool item1_flag = false;
	 bool item2_flag = false;
	 bool item3_flag = false;
	 bool item4_flag = false;
	
	*/
	
	
	 




	 //d아래 처럼 처리하면 복잡하다

	 //event!!
	/*
	item1_flag = true;
	//die!! item2 loss;
	item2_flag = false;
	if (item3_flag)
	{
		//event

	}

	if (item3_flag&&!item4_flag)
	{
		item3_flag = false;
		item4_flag = true;

	}
	*/
}