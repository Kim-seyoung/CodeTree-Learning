#include <iostream>

using namespace std;

int y;

bool isYoonYear(int y) {
    bool result = false;
    if(y % 4 == 0)
        result = true;
    if(y % 100 == 0 && y % 400 != 0)
        return false;
    return result;
}

int main() {
    cin >> y;

    // Please write your code here.
    if(isYoonYear(y)) cout << "true";
    else cout << "false";
    return 0;
}