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



	//double과 long double 사이즈는같다.

	cout << numeric_limits<float>::min() << endl;
	cout << numeric_limits<double>::min() << endl;
	cout << numeric_limits<long double>::min() << endl;
	// min이 양수... 절대값을 가진다. 



	cout << numeric_limits<float>::lowest() << endl;
	cout << numeric_limits<double>::lowest() << endl;
	cout << numeric_limits<long double>::lowest() << endl;
	// 범위를 보려면 이 메소드


	//float에서 double로 가고 있다. 
	
	cout << 3.14 << endl;
	cout << 31.4e-1 << endl;
	cout << 31.4e-2 << endl;
	cout << 31.4e1 << endl;
	cout << 31.4e2 << endl;


	float fl(123456789.9f);
	/*
	
	오늘은 setprecision에 대해 알아보자.
	기본 입출력은 변수의 데이터 타입을 별도로 지정해 주지 않아도 알아서 지정해 주었다.
	//기본 입출력
	cin >> x; //input 
	cout << x; //output
	getline(cin,s);

	이런 식으로.
	하지만 때로는 출력 사항에 소수점 아래에 반올림을 해야하거나 소수점 출력을 요구할 때가 있다. 그럴 경우에 쓰는 것이 setprecision이다. 
	예시를 보자.



	
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
	//코딩시 이러한 결과가 나오면 안된다.
	//그래서 디버깅할때 이용하는 함수를 사용해서 확인



	return 0;
}