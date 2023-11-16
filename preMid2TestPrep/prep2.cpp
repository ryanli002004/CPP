#include <iostream>
using namespace std;

void advance(int x[],int size){
    int temp = x[size-1];
    for (int i =size-1;i>=0;i--){
        if (i == 0){
            x[i] = temp;
        }
        else{
        x[i] = x[i-1];
        }
    }
}

int main(){
    int x[5] = {3,1,4,1,5};
    advance(x,5);
    cout<< x[0] <<x[1] << x[2]<<x[3]<<x[4]<<endl;
    return 0;
}