#include <iostream>
using namespace std;

void printEvenReverse(int x){
    if (x<=9){
        if (x%2==1){
            return;
        }
        else {
            cout<<x;
            return;
        }
    }
    else{
        int lastDigit = x%10;
        if (lastDigit%2==0){
            cout<<lastDigit;
        }
        printEvenReverse(x/10);
    }
}

int remove2Duplicate7(int x){
    if (x<=9){
        if (x==2){
            return 0;
        }
        else if (x==7){
            return 77;
        }
        else{
            return x;
        }
    }
    else{
        int lastDigit = x%10;
        if (lastDigit==2){
            return remove2Duplicate7(x/10);
        }
        else if (lastDigit==7){
            return 100 * remove2Duplicate7(x/10)+77;
        }
        else{
            return 10 * remove2Duplicate7(x/10)+lastDigit;
        }

    }
}

int main(){
	printEvenReverse(63078); cout << endl;// print 806
	printEvenReverse(27); cout << endl; // print 2
	cout << remove2Duplicate7(273724) << endl; // print 773774
	cout << remove2Duplicate7(2) << endl; // print 0
	cout << remove2Duplicate7(7) << endl; // print 77
	cout << remove2Duplicate7(27) << endl; // print 77
	return 0;
}