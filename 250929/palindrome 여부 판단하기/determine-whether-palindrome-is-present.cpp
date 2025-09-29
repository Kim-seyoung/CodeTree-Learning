#include <iostream>
#include <string>

using namespace std;

string A;

bool isPalindrome(string &str) {
    for(int i = 0; i < str.length(); i++) {
        if(str[i] != str[str.length() - 1 - i])
            return false;
    }
    return true;
}

int main() {
    cin >> A;

    // Please write your code here.
    if(isPalindrome(A)) cout << "Yes";
    else cout << "No";
    return 0;
}