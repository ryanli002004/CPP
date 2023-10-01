#include <iostream>
using namespace std;
int main() {
    cout<<"enter an odd number: ";
    int x;
    cin>>x;
    for (int row = 1; row<=x;row++){
        for(int col = 1; col <= x*x; col++){
            if ((col%x == row%x)||((row+col)%x==1)){
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