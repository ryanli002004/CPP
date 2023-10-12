#include <iostream>
using namespace std;
void printStdDeduct(string status){
    if(status == "single"){
        cout<<"For single filers, the standard deduct amount is $13,850."<<endl;
    }
    else{
        cout<<"The standard deduct amount for married filing is $27,700."<<endl;
    }
}
double taxRate(string status, double income){
    if(status == "single"){
        if(income>100000){
            return 0.2;
        }
        else{
            return 0.1;
        }
    }
    else{
        if(income>200000){
            return 0.2;
        }
        else{
            return 0.1;
        }
    }
}
int main(){
	string status, recal;
	double income;
	while (true){
		cout << "Enter your filig status <single/married>: ";
		cin >> status;
		if (status != "single" && status != "married") continue;
		cout << "Enter your income: $";
		cin >> income;
		if (income < 0) continue;

		cout << "Tax rate is " << taxRate(status, income)*100 <<"%"<< endl;
		
		printStdDeduct(status);

		cout << "Recalculate <yes/no>?";
		cin >> recal;
		if (recal == "no") break; 
	}

	return 0;
}