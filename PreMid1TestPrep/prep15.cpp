#include <iostream>
using namespace std;
int main(){
    cout<<"enter a number ";
    int n;
    cin>> n;
    for (int row=1; row<=(n*2)-1;row++){
        for (int num = 1; num<=n;num++){
            for (int col=n; col>=1; col--){
                if((row > n-col)&&(row<n+col)){
                    cout<<"*";
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





//