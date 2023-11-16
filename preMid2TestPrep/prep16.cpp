#include <iostream>
using namespace std;

void display(int x){
    if (x==0){return;}
    display(x/10);
    for (int y = 1;y<=9-(x%10);y++){
        cout<<" ";
    }
    for (int i = 1; i<=(x%10);i++){
        cout<<"X";
    }
    cout<<endl;
}

int main(){
    display(31415);
    return 0;
}