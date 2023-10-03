#include <iostream>
using namespace std;
int main(){
    cout<<"enter a number: ";
    int x;
    cin>>x;
    for (int num = 1; num<=x;num++){
        for (int row = 1; row<=x; row++){
            for (int col = 1; col<=x; col++){
                if(num%2==1){
                    if(col>=row){
                        cout<<"O";
                    }
                    else{
                        cout<<" ";
                    }
                }
                else{
                    if (row>=col){
                        cout<<"O";
                    }
                    else{
                        cout<<" ";
                    }
                }
            }
            cout<<endl;
        }
        for(int star = 1; star<=x;star++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}