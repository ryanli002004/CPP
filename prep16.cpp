#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of right triangles: ";
    cin >> n;
    cout << endl;
    for(int row = 1; row<=n;row++){
        for (int col=1;col<=n;col++){
            if (row>=col){
                cout<<"X";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}