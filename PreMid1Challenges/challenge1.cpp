#include <iostream>
using namespace std;
int main(){
    cout<<"enter a number:";
    int x;
    cin >> x;
    for (int y = 1;y<=x;y++){
        for (int z = 1;z<=y;z++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}