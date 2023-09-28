#include <iostream>
using namespace std;
int main() {
    for (int x=1;x<=8;x++){
        for (int y = 1; y<=8;y++){
            if (x%2==1){
                if (y%2==1){
                    cout<<"X";
                }
                else{
                    cout<<"O";
                }
            }
            else if (x%2==0){
                if (y%2==0){
                    cout<<"X";
                }
                else{
                    cout<<"O";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}