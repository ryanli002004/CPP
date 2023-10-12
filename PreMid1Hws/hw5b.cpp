#include <iostream>
using namespace std;
void printNumbersBetween(int x, int y){
    int min,max;
    if (x<y){
        min = x;
        max = y;
    }
    else{
        min = y;
        max = x;
    }
    for (int x = min; min<=max;min++){
        cout<<min<<" ";
    }
}

int main(){
	printNumbersBetween(0, 4); // prints 0 1 2 3 4
   	printNumbersBetween(5, -2) ; // prints -2 -1 0 1 2 3 4 5
   	printNumbersBetween(6, 6);   // prints 6
   	return 0;
}