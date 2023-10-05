#include <iostream>
#include <cmath>
using namespace std;
int main(){
    cout<<"enter three sides of a triangle: ";
    int x,y,z;
    cin>>x>>y>>z;
    double p = (x+y+z)/2;
    double a = sqrt((p*(p-x)*(p-y)*(p-z)));
    cout<<"the area of that triangle is "<<a<<endl;
}