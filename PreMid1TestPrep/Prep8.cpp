#include <iostream>
using namespace std;
int main(){
    cout<<"enter a odd number:";
    int x;
    cin>>x;
    for (int row = 1; row<=(x*2);row++){
        for (int col = 1; col<=(3*x)+2;col++){
            if (col%(x+1)==0){
                cout<<" ";
            }
            else if (row == 1){
                cout<<"*";
            }
            else if ((row %2 == 1)&&(col%(x+1)==(x+1)/2)){
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