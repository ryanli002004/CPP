#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a number: ";
    cin>>x;
    for (int row =1; row<=(2*x)-1;row++){
        for (int col = 1; col <= x;col++){
            if ((col==x-row)||(col==x+row)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<< endl;
    }
    return 0;
}