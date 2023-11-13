#include <iostream> 
using namespace std;

int luckySeven(int x){
    if (x <=0){return 0;}
    if (x%10==7){return 100*luckySeven(x/10)+77;}
    return 10*luckySeven(x/10)+x%10;
}

int main(){
    cout<<luckySeven(7347)<<endl;
    cout<<luckySeven(94872)<<endl;
    cout<<luckySeven(77)<<endl;
    return 0;
}