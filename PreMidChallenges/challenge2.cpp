#include <iostream>
using namespace std;
int main() {
    cout<<"enter a number: ";
    int x;
    cin>>x;
    for (int y = 0;y<x;y++){
        for (int space = 0;space<=y;space++){
            cout<<" ";
        }
        for (int star = y;star<x;star++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}