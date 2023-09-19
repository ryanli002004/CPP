//Author : Ryan Li
#include <iostream>
using namespace std;
int main(){
	int x;
	cout<<"Enter a positive number: ";
	cin>>x;
	while (x<1){
	cout<<"Enter a positive number: ";
	cin>>x;
	}
	int counter = 0;
	while(true){
	counter += 1;
	if (counter > x){
			break;
		}
	if (counter % 2 == 1 ){
		cout<<(counter*3)+1<<" ";
		}
	if (counter % 2 == 0 ){
		cout<<counter/2<<" ";
		}
	}
	cout<<endl;
	return 0;
}
