//Author: Ryan Li
#include <iostream>
using namespace std;
int main() {
	int counter = 0;
	int guess = 0;
	int answer = 194;
	while (guess != answer){
		counter +=1;
		if (counter > 4){
			cout<<"The answer was 194"<<endl;
			return 0;
		}
		cout<<"I am a three-digit number."<<endl<<"My tens digit is five more than my ones digit, and my hundreds digit is eight less than my tens digit."<<endl<<"What number am i? ";
		cin>>guess;
	}
	cout<<"Well done!"<<endl;
	return 0;
}
