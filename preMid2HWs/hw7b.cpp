#include <iostream>
#include <cstdlib>
using namespace std;

void populate(int x[][7],int row,int col){
    for (int r=0; r<row;r++){
        for (int c=0; c<col;c++){
            x[r][c]=rand()%(70-30+1)+30;//range wasnt provided in the problem so i just assumed it was from 30-70
        }
    }
}

string convert(int x){
    if (x==0){
        return "Sunday";
    }
    else if(x==1){
        return "Monday";
    }
    else if(x==2){
        return "Tuesday";
    }
    else if(x==3){
        return "Wednesday";
    }
    else if(x==4){
        return "Thursday";
    }
    else if(x==5){
        return "Friday";
    }
    else if(x==6){
        return "Saturday";
    }
}

void average(int x[][7],int row,int col){
    cout<<"--- Average by Weekday ---"<<endl;

    for (int c=0; c<col;c++){
        int counter = 0;
        for (int r=0; r<row;r++){
            counter += x[r][c];
        }
        double average = counter/4.0;
        cout<<convert(c)<<": "<<average<<endl;

    }
}

void highlow(int x[][7],int row,int col){
    for (int r=0; r<row;r++){
        int counter = 0;
        int lowIndex=0;
        int highIndex=0;
        for (int c=0; c<col;c++){
            if (x[r][c] > x[r][highIndex]){
                highIndex = c;
            }
            if (x[r][c] < x[r][lowIndex]){
                lowIndex = c;
            }
            counter += x[r][c];
            
        }
        double average = counter/7.0;
        cout<<"-- Week "<<r+1<<" --"<<endl;
        cout<<"Highest Temperature: "<<x[r][highIndex]<<" ("<<convert(highIndex)<<")"<<endl;
        cout<<"Lowest Temperature: "<<x[r][lowIndex]<<" ("<<convert(lowIndex)<<")"<<endl;
        cout<<"Average Temperature: "<<average<<endl;
    }
}

void display(int x[][7],int row,int col){
    cout<<"Temperature Data in Fahrenheit:"<<endl;
    for (int r=0; r<row;r++){
        cout<<"Week "<<r+1<<": ";
        for (int c=0; c<col;c++){
            cout<<x[r][c]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[4][7];
    populate(arr,4,7);
    display(arr,4,7);
    highlow(arr,4,7);
    average(arr,4,7);
    return 0;
}