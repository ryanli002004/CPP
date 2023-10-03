#include <iostream> 
using namespace std;
int main(){
    cout<<"enter a number: ";
    int x;
    cin>>x;
    for (int row = 1; row<=x; row++){
        for (int col = 1; col<=(2*x-1);col++){
            if((col>=row)&&(row+col<=2*x)){
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