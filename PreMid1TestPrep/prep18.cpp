#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>> n;
    for (int row = 1; row<= (2*n-1);row++){
        for (int col = 1; col<= n;col++){
            if ((row+col<=2*n)&&(row>=col)){
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