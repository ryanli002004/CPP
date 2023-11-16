#include <iostream> 
using namespace std;

int digitMatch (int first, int second, int third){
        if ((first<=0 )|| (second <=0) || (third <=0)){return 0;}
        if ((first % 10 == second % 10)&&(first % 10 == third %10)){return 1 + digitMatch(first/10,second/10,third/10);}
        else{return digitMatch(first/10,second/10,third/10);}
}

int main(){
    cout<< digitMatch(0,0,0)<<endl;
    return 0;
}