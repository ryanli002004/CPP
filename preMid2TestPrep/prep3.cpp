#include <iostream>
using namespace std;

int digitOppisite(int x, int y){
    if ((x<=0)||(y<=0)){return 0;}
    if ((((x%10)%2==0)&&((y%10)%2==0))||(((x%10)%2==1)&&((y%10)%2==1))){
        return digitOppisite(x/10,y/10);
    }
    else{return 1+digitOppisite(x/10,y/10);}
}

int main(){
    cout<< digitOppisite(17345,97813)<<endl;
    cout<< digitOppisite(13579,24680)<<endl;
}