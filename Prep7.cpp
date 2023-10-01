#include <iostream>
using namespace std;
int main(){
    cout << "enter a posititve number: ";
    int x;
    cin>>x;
    for (int row = 1; row<= x; row++){
        for (int col = 1; col<= x; col++){
            if ((col%2==1)&&(row%2==1)){
                cout<<"#";
            }
            else{
                cout<<"o";
            }
        }
        cout<<endl;
    }
}


//#o#
//#oo
//###