#include <iostream>
using namespace std;
int main(){
    cout<<"enter the number of triangles: ";
    int x;
    cin>>x;
    for (int num = 1;num<=x;num++){
        if (num%2==1){
            for (int row = 1;row<=x;row++){
                for (int col = 1; col<=x;col++){
                    if(col<=row){
                        cout<<"X";
                    }
                }
                cout<<endl;
            }
        }
        if (num%2==0){
            for (int row = 1;row<=x;row++){
                for (int col = 1; col<=x;col++){
                    if(col<row){
                        cout<<" ";
                    }
                    else{
                        cout<<"X";
                    }
                }
                cout<<endl;
            }
        }
        for(int dash = 1; dash <= x; dash++){
            cout<<"-";
        }
        cout<<endl;
    }
    return 0;
}