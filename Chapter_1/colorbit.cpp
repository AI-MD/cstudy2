#include<iostream>
#include<bitset>


int main() {

	using namespace std;

	const unsigned int red_mask = 0xff0000;
	cout << bitset<32>(red_mask) << endl;
	
	const unsigned int green_mask = 0x00ff00;
	cout << bitset<32>(green_mask) << endl;
	
	const unsigned int blue_mask = 0x0000ff;
	cout << bitset<32>(blue_mask) << endl;

	unsigned int pixel_color = 0xDAA520;
	cout << bitset<32>(pixel_color) << endl;

	unsigned char blue = pixel_color & blue_mask;
	cout << bitset<8>(blue) <<" "<<int(blue) << endl;
	
	unsigned char green = (pixel_color & green_mask) >> 8;
	cout << bitset<8>(green) << " " << int(green) << endl;

	unsigned char red = (pixel_color & red_mask) >> 16;
	cout << bitset<8>(red) << " " << int(red) << endl;
}
