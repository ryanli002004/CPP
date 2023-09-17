//Author : Ryan Li
#include <iostream>
using namespace std;

int main(){
	int sandc;
	int reg;
	char time;
	cout<<"Enter the number of tickets for seniors and children: ";
	cin >> sandc;
	if (sandc < 0){
		cout<<"no negatives"<<endl;
		return 0;
	}
	cout<<endl<<"Enter the number of regular priced tickets: ";
	cin >> reg;
	if (reg < 0){
                cout<<"no negatives"<<endl;
                return 0;
        }
	cout<<endl<<"Enter show type (M for a matinee, E for an evening show): ";
	cin >> time;
	if ((time != 'M')&&(time != 'E')){
		cout<<"Invalid show type. Bye"<<endl;
		return 0;
	}
	double subtotal;
	double tax;
	int ticketssold;
	double total;
	ticketssold = reg + sandc;
	if (time == 'E'){
		subtotal = (15*reg)+(8*sandc);
	}
	if (time == 'M'){
		subtotal = (10*reg)+(5*sandc);
	}
	tax = 0.05* subtotal;
	total = tax + subtotal;
	cout<<"============================"<<endl;
	cout<<"receipt"<<endl;
	cout<<"----------------------------"<<endl;
	if(time=='E'){
		cout<<"Evening Show"<<endl;
		cout<<"Seniors and Children @ $8.00 x "<< sandc<<endl;
		cout<<"Regular @ $15.00 x "<<reg<<endl;
	}
	if(time=='M'){
		cout<<"Matinee Show"<<endl;
		cout<<"Seniors and Children @ $5.00 x "<< sandc<<endl;
                cout<<"Regular @ $10.00 x "<<reg<<endl;
	}
	cout<<"-----------------------------"<<endl;
	cout<<"Tickets Sold: "<< ticketssold<<endl;
	cout<<"Subtotal: $"<< subtotal<<endl;
	cout<<"Tax @ 5%: $"<< tax<<endl;
	cout<<"============================="<<endl;
	cout<<"Total: $"<<total<<endl;

	return 0;
}
