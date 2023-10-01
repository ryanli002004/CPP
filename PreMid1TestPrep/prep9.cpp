#include <iostream>
using namespace std;
int main(){
    int x = 0;
    while ((x<1)||(x>21)){
        cout<< "enter a number between 1 and 21: ";
        cin>>x;
    }
    for (int row = 1; row <=x;row++){
        for (int col = 1; col <=x;col++){
            if ((col==row)||(col-1 == row)){
                cout<<"O";
            }
            else{
                cout<<"X";
            }
        }
        cout<<endl;
    }
    return 0;
}