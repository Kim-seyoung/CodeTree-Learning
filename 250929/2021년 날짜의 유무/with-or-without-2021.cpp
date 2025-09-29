#include <iostream>

using namespace std;

int M, D;

bool isExist(int month, int day) {
    if(month == 4 || month == 6 || month == 9 || month == 11)
    {
        if(day <= 30) return true;
        else return false;
    }
    else if (month == 2)
    {
        if(day <= 28) return true;
        else return false;
    }
    else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        if(day <= 31) return true;
        else return false;
    }
    else
        return false;
}

int main() {
    cin >> M >> D;

    // Please write your code here.
    if(isExist(M, D)) cout << "Yes";
    else cout << "No";
    return 0;
}