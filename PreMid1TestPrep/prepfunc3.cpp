#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    int correct = 0;
    for (int x =1 ; x<=5;x++){
        int num1 = rand()%100+1;
        int num2 = rand()%100+1;
        int sum = num1+num2;
        cout<<num1<<" + "<<num2<<" = ";
        int answer;
        cin>>answer;
        if (answer==sum){
            correct+=1;
        }
        else{
            cout<<"Wrong! the answer is: "<<sum<<endl;
        }
    }
    int wrong = 5 - correct;
    cout<<"you got "<<correct<<" correct and "<<wrong<<" wrong!"<<endl;
    return 0;
}