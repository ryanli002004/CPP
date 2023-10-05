#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    for(int x=1; x<=10;x++){
        cout<<15+(rand()%76);
        cout<<endl;
    }
    cout<<"enter a base: ";
    int base;
    int expo;
    cin>>base;
    cout<<"enter a exponent: ";
    cin>>expo;
    cout<<base<<"to the power of"<<expo<<"equals: "<<pow(base,expo);
    return 0;
}