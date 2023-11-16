#include <iostream>
using namespace std;

void dropDimension(int y[][3],int r,int c, int x[]){
    int count = 0;
    for (int row = 0 ; row<r;row++){
        for (int col = 0; col<c;col++){
            x[count] = y[row][col];
            count += 1;
        }
    }

}

int main(){
    int x[100];
    int y[2][3] = {{3,1,4},{1,5,9}};
    int yrows = 2, ycols = 3;
    dropDimension(y,yrows,ycols,x);
    for (int i=0;i<=5;i++) cout<<x[i];
    cout<<endl;
    return 0;
}