/* Q37. A registration system rejects usernames that contain spaces or special characters. Write a C++ program to validate whether a given string can be accepted as a username. */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool valid = true;

    for(int i = 0; i < s.length(); i++) {
        if(!((s[i] >= 'a' && s[i] <= 'z') || 
             (s[i] >= 'A' && s[i] <= 'Z') || 
             (s[i] >= '0' && s[i] <= '9'))) {
            valid = false;
            break;
        }
    }

    if(valid)
        cout << "Valid Username";
    else
        cout << "Invalid Username";

    return 0;
}