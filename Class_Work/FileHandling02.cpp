//Reading data from a file
#include<fstream>
#include<iostream>
using namespace std;
int main(){
    ifstream file("data.txt");
    //open file for reading
   string text;
   while(getline(file,text)){
       cout<<text<<endl;
   }
   file.close();
    return 0;
}