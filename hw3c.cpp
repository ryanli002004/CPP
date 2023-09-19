//Author : Ryan Li
#include <iostream>
using namespace std;
int main(){
	cout<<"I am a four-digit number."<<endl<<"My first digit is one-third of my last digit, and the sum of my first two digit is equal to my third digit."<<endl<<"What number am I?"<<endl;
	cout<<"Answers: ";
	int counter = 999;
       	while (counter <9999){
		counter += 1;
		int forth = counter%10;
		int third = (counter/10)%10;
		int second = (counter/100)%10;
		int first = (counter /1000)%10;
		if (((first*3)==forth) && (first+second==third)){
			cout<<counter<<" ";
		}
	}	
	cout<<endl;
	return 0;
}
