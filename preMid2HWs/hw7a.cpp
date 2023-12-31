#include <iostream>
#include <cstdlib>
using namespace std;

void populate (int x[], int size){
    for (int i = 0; i< size;i++){
        x[i] = rand()%(80-60+1)+60;
    }
}

void cool(int x[], int size){
    cout<<"Cooling Degree Days for Each Day:"<<endl;
    int counter = 0;
       for (int i = 0; i< size;i++){
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

void display(int x[],int size){
    cout<<"Temperature Data in Fahrenheit:"<<endl;
       for (int i = 0; i< size;i++){
            cout<<"Day"<<i+1<<":"<<" "<<x[i]<<endl;
       }
}

int main(){
    int arr[30];
    populate(arr,30);
    display(arr,30);
    cool(arr,30);
    return 0;
}