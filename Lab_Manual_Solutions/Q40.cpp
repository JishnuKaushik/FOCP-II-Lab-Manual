/* Q40. A content-management system receives user-entered text that may contain inconsistent spacing, mixed letter cases, and invalid characters. Develop a C++ program to:
1. Remove leading, trailing, and extra spaces
2. Convert to sentence case
3. Count words, digits, and special characters
4. Validate final string contains only alphabets, digits, and spaces */

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    string temp = "";
    int i = 0;

    while(i < s.length() && s[i] == ' ')
        i++;

    bool space = false;
    for(; i < s.length(); i++) {
        if(s[i] == ' ') {
            if(!space) {
                temp += ' ';
                space = true;
            }
        } else {
            temp += s[i];
            space = false;
        }
    }

    if(temp.length() > 0 && temp[temp.length() - 1] == ' ')
        temp.pop_back();

    if(temp.length() > 0) {
        temp[0] = toupper(temp[0]);
        for(int i = 1; i < temp.length(); i++) {
            temp[i] = tolower(temp[i]);
        }
    }

    int words = 0, digits = 0, special = 0;

    for(int i = 0; i < temp.length(); i++) {
        if(isdigit(temp[i]))
            digits++;
        else if(!(isalpha(temp[i]) || temp[i] == ' '))
            special++;
    }

    if(temp.length() > 0)
        words = 1;

    for(int i = 0; i < temp.length(); i++) {
        if(temp[i] == ' ')
            words++;
    }

    bool valid = true;
    for(int i = 0; i < temp.length(); i++) {
        if(!(isalpha(temp[i]) || isdigit(temp[i]) || temp[i] == ' ')) {
            valid = false;
            break;
        }
    }

    cout << temp << endl;
    cout << words << " " << digits << " " << special << endl;

    if(valid)
        cout << "Valid";
    else
        cout << "Invalid";

    return 0;
}