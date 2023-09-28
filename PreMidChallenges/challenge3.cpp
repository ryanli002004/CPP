#include <iostream>
using namespace std;
int main(){
    cout<<"enter a number: ";
    int x;
    cin>>x;
    for (int lines = 1;lines <= x;lines++){
        for (int y = 1; y <= x; y++){
            if ((y == lines)||(y + lines == x+1)){ 
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}