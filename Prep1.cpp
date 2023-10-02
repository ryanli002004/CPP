#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a number: ";
    cin>> x;
    for(int row = 1; row<=(2*x)-1;row++){
        for (int col = 1; col <= x; col++){
            if((row>x-col)||(row<x+col)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0; 
}

// 123
//1*   x-2
//2**  x-1
//3*** x
//4**  x+1
//5*   x+2