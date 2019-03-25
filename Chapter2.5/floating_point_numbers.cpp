#include <iostream>
#include <limits>
#include <iomanip>

#include <cmath>
int main() {
	using namespace std;

	float f;
	double d;
	long double ld;

	cout << numeric_limits<float>::max() << endl;
	cout << numeric_limits<double>::max() << endl;
	cout << numeric_limits<long double>::max() << endl;



	//double�� long double ������°���.

	cout << numeric_limits<float>::min() << endl;
	cout << numeric_limits<double>::min() << endl;
	cout << numeric_limits<long double>::min() << endl;
	// min�� ���... ���밪�� ������. 



	cout << numeric_limits<float>::lowest() << endl;
	cout << numeric_limits<double>::lowest() << endl;
	cout << numeric_limits<long double>::lowest() << endl;
	// ������ ������ �� �޼ҵ�


	//float���� double�� ���� �ִ�. 
	
	cout << 3.14 << endl;
	cout << 31.4e-1 << endl;
	cout << 31.4e-2 << endl;
	cout << 31.4e1 << endl;
	cout << 31.4e2 << endl;


	float fl(123456789.9f);
	/*
	
	������ setprecision�� ���� �˾ƺ���.
	�⺻ ������� ������ ������ Ÿ���� ������ ������ ���� �ʾƵ� �˾Ƽ� ������ �־���.
	//�⺻ �����
	cin >> x; //input 
	cout << x; //output
	getline(cin,s);

	�̷� ������.
	������ ���δ� ��� ���׿� �Ҽ��� �Ʒ��� �ݿø��� �ؾ��ϰų� �Ҽ��� ����� �䱸�� ���� �ִ�. �׷� ��쿡 ���� ���� setprecision�̴�. 
	���ø� ����.



	
	*/
	cout << std::setprecision(9);
	cout << fl << endl;



	double zero = 0.0;
	double posinf = 5.0 / zero;
	double neginf = -5.0 / zero;
	double nan = zero / zero;

	cout << posinf << endl;
	cout << neginf << endl;
	cout << nan << endl;

	cout << nan << " " << std::isnan(nan) << endl;
	cout << 1.0 << " " << std::isnan(1.0) << endl;
	//�ڵ��� �̷��� ����� ������ �ȵȴ�.
	//�׷��� ������Ҷ� �̿��ϴ� �Լ��� ����ؼ� Ȯ��



	return 0;
}