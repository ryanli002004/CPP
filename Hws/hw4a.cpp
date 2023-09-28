//Author : Ryan Li
#include <iostream> 
using namespace std;
int main(){
	int x = 0;
	while ((x%2!=1)||!(x>0)){
		cout<<"Enter a positive odd integer: ";
		cin>> x;
	}
	for(int r=1;r<=x;r++){
		for(int c=1;c<=x;c++){
			if(c+r == x+1){
				if(r==c){
					cout<<"O";
				}
				else if(c>(x/2)+1){
					cout<<"A";
				}
				else if(c<(x/2)+1){
					cout<<"B";
				}
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}

