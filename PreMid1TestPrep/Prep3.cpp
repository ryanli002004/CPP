#include <iostream>
using namespace std;
int main(){
    cout<<"Enter the number of diagonal lines: ";
    int x;
    cin>>x;
    for (int row =1;row<=x;row++){
        for (int num =1; num <= x; num++){
            for(int col = 1; col<= x; col++){
                if (num%2==1){
                    if (row+col==x+1){
                        cout<<"X";
                    }
                    else{
                        cout<<" ";
                    }
                }
                else{
                    if (row==col){
                        cout<<"X";
                    }
                    else{
                        cout<<" ";
                    }
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
// 1234567890123456789012345 
//1    XX        XX        X
//2   X  X      X  X      X
//3  X    X    X    X    X
//4 X      X  X      X  X 
//5X        XX        XX
