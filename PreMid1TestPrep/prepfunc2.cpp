#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    for (int row = 1; row<=4; row++){
        for (int col = 1; col<=5;col++){
            cout<<rand()%(99-10+1)+10<<" ";
        }
        cout<<endl;
    }
    return 0;
}