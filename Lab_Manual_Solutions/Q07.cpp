/*7. A game compares three players' scores to find who is ahead. Implement a solution to accept three scores 
and identify the winner.*/


                    //NESTED IF ELSE

/*
#include<iostream>
using namespace std;
int main(){

    int a,b,c;

    cout<<"SCORES EARNED BY A: "<<endl;
    cin>>a;

    cout<<"SCORES EARNED BY B: "<<endl;
    cin>>b;

    cout<<"SCORES EARNED BY C: "<<endl;
    cin>>c;

    if(a>b){
        if(a>c)
        {
            cout<<"A IS THE WINNER";
        }
        else{
            cout<<"C IS THE WINNER";
        }

    }
    else {
        if (b>c){
            cout<<"B IS THE WINNER";
        }
        else {
            cout<<"C IS THE WINNER";
        }
    }
return 0;
}
*/
                    //CLEAR IDF ELSE
                    #include<iostream>
using namespace std;

int main(){

    int a,b,c;

    cout<<"Enter scores of A, B, C: ";
    cin>>a>>b>>c;

    if(a>b && a>c){
        cout<<"A IS THE WINNER";
    }
    else if(b>a && b>c){
        cout<<"B IS THE WINNER";
    }
    else if(c>a && c>b){
        cout<<"C IS THE WINNER";
    }
    else{
        cout<<"IT'S A TIE";
    }

    return 0;
}