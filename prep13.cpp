#include <iostream>
using namespace std;

void bigSmall(int&x, int&y){
    if (x==0){return;}
    int tempx=x/10,tempy=y/10;
    bigSmall(tempx,tempy);
    if (x%10>y%10){
        x= 10*tempx+x%10;
        y=10*tempy+y%10;
    }
    else{
        x= 10*tempx+y%10;
        y=10*tempy+x%10;
    }
}

int main() {
    int x = 31415, y = 27182;
    bigSmall(x, y);
    cout << x << " " << y << endl; // prints 37485 21112
    return 0;
}