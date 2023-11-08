#include <iostream>
#include <cstdlib>
using namespace std;

void populate (int(&x)[30]){
    for (int i = 0; i< 30;i++){
        x[i] = rand()%(80-60+1)+60;
    }
}

void cool(int x[30]){
    cout<<"Cooling Degree Days for Each Day:"<<endl;
    int counter = 0;
       for (int i = 0; i< 30;i++){
            if (x[i] >68){
                int diff = x[i] - 68;
                cout<<"Day "<<i+1<<": "<<diff<<endl;
                counter+=diff;
            }
            else{
                cout<<"Day "<<i+1<<": "<<"0"<<endl;
            }
       }
    cout<<"Total Cooling Degree Day: "<<counter<<endl;
}

void display(int x[30]){
    cout<<"Temperature Data in Fahrenheit:"<<endl;
       for (int i = 0; i< 30;i++){
            cout<<"Day"<<i+1<<":"<<" "<<x[i]<<endl;
       }
}

int main(){
    int arr[30];
    populate(arr);
    display(arr);
    cool(arr);
    return 0;
}