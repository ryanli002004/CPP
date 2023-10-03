#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a num: ";
    cin>>x;
    for (int num = 1; num<=x;num++){
        for (int row = x; row>=1;row--){
            for (int col =1; col<=(x*2)-1;col++){
                if((col > x-row)&&(col < x+row)){
                    cout<<"X";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}