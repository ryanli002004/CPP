#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a num: ";
    cin>>x;
    for (int row = 1; row<=x;row++){
        for (int num = 1; num<=x;num++){
            for (int col = 1; col<= x; col++){
                if (col == row){
                    cout<<"X";
                }
                else if (col+row==x+1){
                    cout<<"X";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}