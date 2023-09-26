#include <iostream>
using namespace std;
int main() {
    for (int r= 1;r<=5;r++){
        for(int c=1;c<=9;c++){
            if(c+r>=6 && c<=r+4){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0 ;
}