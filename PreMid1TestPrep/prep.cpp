#include <iostream>
using namespace std;
int main(){
    cout<<"enter num: ";
    int x;
    cin>>x;
    for(int row = 1; row<= (x*2-1); row++){
        for (int col = x; col>=1;col--){
            if ((row==col)||(row+col==2*x)){
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