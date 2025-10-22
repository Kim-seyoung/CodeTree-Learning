#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int num[7];
    for(int i = 0; i < 7; i++) {
        cin >> num[i];
    }

    sort(num, num+7);

    int a = num[0];
    int b = num[1]; 
    int c;

    int a_b_c = num[6];
    int b_c = a_b_c - a;
    c = b_c - b;

    cout << a << " " << b << " " << c;

    return 0;
}