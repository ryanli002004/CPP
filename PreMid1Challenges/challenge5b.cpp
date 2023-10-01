#include <iostream>
using namespace std;
int main(){
    int h;
    cout<<"height of isolosis triangle: ";
    cin>>h;
    for(int row = 1;row<=h;row++){
            for (int col = 1; col<=(h*2)-1;col++){
                if((col<h+row)&&(col>h-row)){
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