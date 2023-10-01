#include <iostream> 
using namespace std;
int main() {
    cout<< "enter a number: ";
    int x;
    cin>>x;
    for (int row = 1;row<=x;row++){
        for (int col = 1; col<= x*(x+1);col++){
            if (col%(x+1)==0){
                cout<<" ";
            }
            else if ((col+row)%(x+1)==0){
                cout<<"O";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}