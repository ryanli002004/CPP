#include <iostream>
using namespace std;
int main(){
    int h,l;
    cout<<"height of isolosis triangle: ";
    cin>>h;
    cout<<"length of isolosis triangle: ";
    cin>>l;
    int center = l/2 + 1;
    for(int z = 1;z<=h;z++){
            for (int x = 1; x<=l;x++){
                if((x<center+z)&&(x>center-z)){
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