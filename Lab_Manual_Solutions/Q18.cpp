/* Q18. A String-matching tool validates if IDs are palindromes. Implement a solution to check whether a given ID is a palindrome. */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    string rev = s;
    int n = s.length();

    for(int i = 0; i < n/2; i++) {
        char temp = rev[i];
        rev[i] = rev[n - i - 1];
        rev[n - i - 1] = temp;
    }

    if(s == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}