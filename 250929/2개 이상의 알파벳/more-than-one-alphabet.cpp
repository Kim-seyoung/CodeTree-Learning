#include <iostream>
#include <string>

using namespace std;

string A;

bool findChar(string str, char ch) {
    for(int i = 0; i < str.length(); i++) {
        if(ch = str[i])
            return true;
    }
    return false;
}

bool isalpha2(string& str) {
    int cnt = 0;
    for(int i = 0; i < str.length(); i++) {
        bool check = true;
        for(int j = 0; j <= i; j++) {
            if(i != j)
                if(str[i] == str[j])
                {
                    check = false;
                    break;
                }    
        }
        if(check)
            cnt++;
    }
    if(cnt >= 2) return true;
    else return false;
}

int main() {
    cin >> A;

    // Please write your code here.
    if(isalpha2(A)) cout << "Yes";
    else cout << "No";

    return 0;
}