#include <iostream>
using namespace std;

int sumOfNum(int x){
    if (x<=9){
        return x;
    }
    else {
        return sumOfNum(x/10)+x%10;
    }
}

int main(){
    cout<<sumOfNum(123409);
    return 0;
}