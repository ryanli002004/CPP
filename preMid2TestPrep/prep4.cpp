#include <iostream> 
using namespace std;

int gcb(int x, int y){
    if(x==y){return x;}
    if (x>y){return gcb(x/10,y);}
    return gcb(x,y/10);
}

int main(){
    cout<< gcb(213,223)<<endl;
    cout<< gcb(117,119)<<endl;
    cout<< gcb(1357, 136578)<<endl;
    return 0;
}