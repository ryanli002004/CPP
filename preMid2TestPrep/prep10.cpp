#include <iostream>
using namespace std;

int addThree(int x){
    if (x==0){return 0;}
    return 100*addThree(x/10)+10*(x%10)+3;
}

int main(){
    cout<<addThree(7897);
    return 0;
}