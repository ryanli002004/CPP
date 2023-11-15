#include <iostream>
using namespace std;

void bigSmall(int&x, int&y){
    int tempx=0, tempy=0;
    while (x!=0){
        if(x%10 > y%10){
            tempx= tempx*10 + x%10;
            tempy= tempy*10 + y%10;
        }
        else{
            tempx= tempx*10 + y%10;
            tempy= tempy*10 + x%10;
        }
        x/=10;
        y/=10;
    }
    x = tempx;
    y = tempy;
}

int main() {
    int x = 31415, y = 27182;
    bigSmall(x, y);
    cout << x << " " << y << endl; // prints 37485 21112
    return 0;
}