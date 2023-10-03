#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a num: ";
    cin>>x;
    for (int row = x;row >= 1; row--){
        for (int col = (2*x-1); col>= 1;col--){
            if ((row+col<=2*x)&&(col>=row)){
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