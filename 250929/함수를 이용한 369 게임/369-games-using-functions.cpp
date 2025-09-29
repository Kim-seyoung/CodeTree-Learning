#include <iostream>
#include <string>

using namespace std;

int a, b;

int is369(int a, int b) {
    int cnt = 0;
    for(int i = a; i <= b; i++) {
        if(i % 3 == 0)
            cnt++;
        else if (to_string(i).find('3') != string::npos || 
				to_string(i).find('6') != string::npos || 
				to_string(i).find('9') != string::npos)
            cnt++;
    }
    cout << cnt;
    return cnt;
}

int main() {
    cin >> a >> b;

    // Please write your code here.
    int result = is369(a, b);
}