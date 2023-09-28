// Author : Ryan Li
#include <iostream>
using namespace std;
int main(){
	int cups;
	double tip;
	double tax;
	double subtotal;
	double total;
	cout<<"How many cups of coffee would you like to order? ";
	cin>> cups;
	subtotal = cups*5.99;
	cout << "Your subtotal is $"<<subtotal<<endl<<"Would you like to give us any tips? Enter the tip amount here: ";
	cin >> tip;
	cout<<"Here is your receipt. Thank you for shopping at XXX."<<endl;
	tax = .05 * subtotal;
	total = subtotal + tax + tip;
	cout <<"========================="<<endl;
	cout<<"Receipt"<<endl;
	cout<<"-------------------------"<<endl;
	cout<<"Items sold: "<<cups<<endl;
	cout<<"Subtotal: $"<<subtotal<<endl;
	cout<<"Tax: $"<<tax<<endl;
	cout<<"Tip: $"<<tip<<endl;
	cout<<"========================="<<endl;
	cout<<"TOTAL: $"<<total<<endl;

	return 0;
}
