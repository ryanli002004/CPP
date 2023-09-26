//Author : Ryan Li
#include <iostream> 
using namespace std;
int main(){
	int x = 0;
	cout<<"Enter a positive integer: ";
	cin>>x;
	if(!(x>0)){
		cout<<"that is a bad input";
		return 0;
	}
	for(int r = 1;r<=x;r++){
		for (int c =1;c<=x;c++){
			if (c+r <= x+1){
				cout<<c;
			}
			else{
				cout<<"*";
			}
		}
		cout<<endl;
	}
	return 0;
}
