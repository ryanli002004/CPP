#include <iostream>
using namespace std;
int main(){
    cout<<"enter two numbers: ";
    int x,y;
    cin>>x>>y;
    int bigger;
    if (x>y){
        bigger = x;
    }
    else{
        bigger =y;
    }
    for (int row = 1; row<= x+y; row++){
        for (int col = 1; col<=bigger;col++){
            if (row<=x){
                if (col<= bigger - x){
                    cout<<" ";
                }
                else{
                    cout<<"X";
                }
            }
            if (row>x){
                if (col<= bigger - y){
                    cout<<" ";
                }
                else{
                    cout<<"Y";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}