#include <iostream>
#include <stack>
using namespace std;

int main() {
    // Please write your code here.
    stack<int> s; bool ans;
    string str; cin >> str;
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == '(') s.push(1);
        else if(str[i] == ')') {
            if(s.empty()) ans = false;
            else s.pop();
        }
    }

    if(s.empty()) ans = true;
    else ans = false;

    if(ans) cout << "Yes";
    else cout << "No";
    return 0;
}