#include <iostream>
using namespace std;
int main(){
    cout<<"enter a positive number: ";
    int x;
    cin>>x;
    for (int squares = 0; squares < x; squares++){
        for (int row = x-squares; row>0; row--){
            for (int col = 1; col <= x; col++){
                if(col <= squares){
                    cout<<" ";
                }
                else{
                    cout<<"*";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}