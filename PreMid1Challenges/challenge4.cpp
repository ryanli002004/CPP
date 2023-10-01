#include <iostream>
using namespace std;
int main(){
    cout<< "enter a positive number: ";
    int x;
    cin>> x;
    for (int y = 0 ; y < x ; y++){
        for(int z = 0 ; z < x ; z++){
            if (y==0){
                cout<<"*";
            }
            else if (z==0){
                cout<<"*";
            }
            else if(y==x-1){
                cout<<"*";
            }
            else if (z==x-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }

        } 
        cout<<endl;

    }
    return 0;
}


