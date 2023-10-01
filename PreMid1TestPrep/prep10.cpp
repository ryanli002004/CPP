#include <iostream>
using namespace std;
int main(){
    cout<<"enter a positive number: ";
    int x;
    cin>>x;
    for (int row = 1; row<= 2*x-1;row++){
        for (int col = 1; col<= 2*x-1; col++){
            if((col%2==0)||(row%2==0)){
                cout<<"-";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}