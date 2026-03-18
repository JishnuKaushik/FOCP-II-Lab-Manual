/*10. A calendar app calculates whether February has 29 days. Implement a solution to check if a year is a 
leap year or not. */
#include<iostream>
using namespace std;

int main() {
    int a;

    cout<<"WHICH YEAR IS IT SIR:"<<endl;
    cin>>a;

    if(a % 400 == 0 || (a % 4 == 0 && a % 100 != 0)){
        cout<<"HURAY IT'S A LEAP YEAR"<<endl;
    }
    else{
        cout<<"JUST A NORMAL YEAR"<<endl;
    }

    return 0;
}