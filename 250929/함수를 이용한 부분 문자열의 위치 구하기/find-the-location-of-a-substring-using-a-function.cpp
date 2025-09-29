#include <iostream>
#include <string>

using namespace std;

string text;
string pattern;

int isSubStr() {
    int idx = -1;
    for(int i = 0; i < text.length() + 1 - pattern.length(); i++) {
        bool exist = true;
        for(int j = 0; j < pattern.length(); j++) {
            if(text[i+j] != pattern[j])
            {
                exist = false;
                break;
            }
        }
        if(exist) 
        {
            idx = i; break;
        }
    }
    return idx;
}

int main() {
    cin >> text;
    cin >> pattern;

    // Please write your code here.
    int result = isSubStr();
    cout << result;
    return 0;
}