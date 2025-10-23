#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.
    string a; cin >> a;
    int cnt = 0;
    for(int i = 0; i < a.length(); i++) {
        if(a[i] == '(' && a[i+1] == '(')
            for(int j = i+2; j < a.length(); j++) {
                if(a[j] == ')' && a[j+1] == ')')
                    cnt++;
            }
    }
    cout << cnt;
    return 0;
}