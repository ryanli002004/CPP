#include <iostream>
using namespace std;

void barcode(int x){
    if (x == 0){return;}
    for (int y = 1; y<= x%10;y++){cout<<"*";}
    cout<<endl;
    barcode(x/10);
}

int main(){
    int x,y;
    cout<<"enter a 5 digit number: ";
    cin>>x;
    if ((x/10000 < 1)||(x/10000 > 9)){return 0;}
    while (x!=0){
        y = (10*y)+(x%10);
        x /= 10;
    }
    barcode(y);
    return 0;
}