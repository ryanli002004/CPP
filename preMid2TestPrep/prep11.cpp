#include <iostream>
using namespace std;

int oddLessEven(int x){
    if (x==0){return 0;}
    if ((x%10)%2==1){return x%10 + oddLessEven(x/10);}
    return -(x%10) + oddLessEven(x/10);
}


int main(){
    cout<< oddLessEven(23)<<endl;
    cout<< oddLessEven(1234)<<endl;
    cout<< oddLessEven(777)<<endl;
    return 0;
}