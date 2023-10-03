#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a number: ";
    cin>> x;
    for (int row=1; row<=(2*x)-1;row++){
        for (int col=x;col>=1;col--){
            if ((row > x-col )&&(row< x+col)){
                cout<<"X";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}

// 1234
//1*     row >= col
//2**   (2*x) >= row+col
//3*** 
//4****  x=4
//5***
//6**
//7*  