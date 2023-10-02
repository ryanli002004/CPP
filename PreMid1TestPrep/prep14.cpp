#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a number:";
    cin>>x;
    for (int row = 1; row<= x;row++){
        for (int col = 1; col<=x*x;col++){
            if ((row+col)%x==1){
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

// 123456789
//1  *  *  *
//2 *  *  *
//3*  *  *
