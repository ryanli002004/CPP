#include <iostream>
using namespace std;
int main(){
    cout<<"enter a number: ";
    int x;
    cin>>x;
    for (int lines = 0;lines < x;lines++){
        for (int y = 0; y < x; y++){
            if ((y == lines)||(y + lines == x-1)){ 
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