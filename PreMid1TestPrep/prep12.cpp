#include <iostream> 
using namespace std;
int main(){
    int x,y,bigger;
    cout<<"enter two numbers";
    cin>>x>>y;
    if (x>=y){
        bigger = x;
    }
    else{
        bigger = y;
    }
    for (int row = 1; row<= bigger; row++){
        for (int col = 1; col<= x+y; col++){
            if (col<=x){
                if(row<=bigger-x){
                    cout<<" ";
                }
                else{
                    cout<<"X";
                }
            }
            if (col>x){
                if(row<=bigger-y){
                    cout<<" ";
                }
                else{
                    cout<<"Y";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}