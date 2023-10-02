#include <iostream>
using namespace std;
int main() {
    int x;
    cout<<"enter a number: ";
    cin>>x;
    for (int row = x;row>=1;row--){
        for (int col = x; col>=1;col--){
            if (x%2==0){
                int x;
                if (col > row){
                    x = col;
                }
                else{
                    x = row;
                }
                if (x%2==0){
                    cout<<"#";
                }
                else{
                    cout<<"o";
                }
            }
            else{
                int x;
                if (col > row){
                    x = col;
                }
                else{
                    x = row;
                }
                if (x%2==0){
                    cout<<"o";
                }
                else{
                    cout<<"#";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}


// 54321
//1#o#o# x=2 r=2 c=2
//2#o#oo
//3#o###
//4#oooo
//5#####

// 123456
//1#o#o#o
//2oo#o#o
//3###o#o
//4oooo#o
//5#####o
//6oooooo