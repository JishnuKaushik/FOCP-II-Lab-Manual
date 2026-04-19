/* Q9. A text editor auto-detects whether an input letter is a vowel, a consonant or a number. Implement a solution to classify the symbol. */

#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    if(ch >= '0' && ch <= '9') {
        cout << "Number";
    }
    else if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            cout << "Vowel";
        else
            cout << "Consonant";
    }
    else {
        cout << "Invalid";
    }

    return 0;
}