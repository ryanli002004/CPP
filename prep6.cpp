#include <iostream>
using namespace std;

void sumDiff (int x[], int y[], int size){
    for (int i = 0;i<size;i++){
        int temp = x[i] + y[i];
        y[i] = x[i] - y[i];
        x[i] = temp;
    }
}

int main(){
    int one[4] = {7,6,8,4};
    int two[4] = {2,6,3,9};
    sumDiff(one, two, 4);
    cout<< one[0]<<one[1]<<one[2]<<one[3]<<endl;
    cout<< two[0]<<two[1]<<two[2]<<two[3]<<endl;
    return 0;
}