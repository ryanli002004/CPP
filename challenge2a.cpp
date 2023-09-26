#include <iostream>
using namespace std;
int main() {
    cout<<"enter a number: ";
    int x;
    cin>>x;
    for (int y=1;y<=x;y++){
        for(int z = 1;z<=x;z++){
            if(z+y <= x+1){
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