//adding whithout deleting old content
#include <fstream>
using namespace std;
int main(){
    ofstream file("data.txt",ios::app);
    //open file for appending
    file<<"\nNew line added to the file.";
    file.close();
    return 0;
}