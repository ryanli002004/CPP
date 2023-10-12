#include <iostream>
using namespace std;
void swapLastDigit(int& x, int& y){
	int xLast = x%10;
	int yLast = y%10;
	int xRest = x/10;
	int yRest = y/10;
	x = (xRest*10) + yLast;
	y = (yRest*10) + xLast;
}

int main() {
	int x = 0, y = 0;
	cout << "Please provide two non-negative integers: ";
	cin >> x >> y;

	while (x < 0 || y < 0){
		cout << "Please provide two non-negative integers: ";
		cin >> x >> y;
	}

	cout << "Before swapping last digits: " << x << ", " << y << endl;
	swapLastDigit(x, y);
	cout << "After swapping last digits: " << x << ", " << y << endl;

	return 0;
}