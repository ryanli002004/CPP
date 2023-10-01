//Author : Ryan Li
#include <iostream>
using namespace std;

int main(){
	int age;
	string agegroup;
	cout<<"This is an age-based game. Please provide your age: ";
	cin>>age;
	if ((age<5)||(age>100)){
		cout<<"That is invalid"<<endl;
		return 0;
	}
	if ((age>=5)&&(age<=12)){
		agegroup = "Child";
		cout<<"You are in the group of "<<agegroup<<endl;
	}
	if ((age>=13)&&(age <=19)){
		agegroup = "Teenager";
		cout<<"You are in the group of "<<agegroup<<endl;
	}
	if ((age>=20)&&(age <= 59)){
		agegroup = "Adult";
		cout<<"You are in the group of "<<agegroup<<endl;
	}
	if (age >= 60) {
		agegroup = "Senior";
		cout<<"You are in the group of "<<agegroup<<endl;
	}
	if (agegroup != "Teenager"){
		cout<<"This Game is not for you. Bye!"<<endl;
		return 0;
	}
	double x,y,z;
	cout<<"Here is the game. Enter three positive integers for the lengths of sides of a triangle: ";
	cin>>x>>y>>z;
	if ((x <= 0)||(y<= 0)||(z<=0)){
		cout<<"No non-positive numbers are allowed"<<endl;
		return 0;
	}
	cout<<endl<<"You entered: "<<x<<", "<<y<<" and "<<z<<endl;
	if ((x+y>z)&&(z+x>y)&&(y+z>x)){
		cout<<"These numbers can form a triangle"<<endl;
	}
	else {
		cout<<"These numbers can't form a triangle"<<endl;
	}
	return 0;
}
