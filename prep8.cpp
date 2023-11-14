#include <iostream>
using namespace std;

long long doubleNum(long long x) {
    if (x == 0) {
        return 0;
    }
    return 100 * doubleNum(x / 10) + 10 * (x % 10) + (x % 10);
}

int main(){
    cout<<doubleNum(248462)<<endl;
    return 0;
}