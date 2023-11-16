#include <iostream>
using namespace std;

void bigSmall(int&x,int&y) {
if (x == 0) return;
int xStart = x / 10, yStart = y / 10;
bigSmall(xStart, yStart);
int max = x % 10, min = y % 10;
if (max < min) {
max = y % 10;
min = x % 10;
}
x = 10 * xStart + max;
y = 10 * yStart + min;
}
int main() {
    int x = 31415, y = 27182;
    bigSmall(x, y);
    cout<< x << " " << y <<endl; // prints 37485 21112
    return 0;
}