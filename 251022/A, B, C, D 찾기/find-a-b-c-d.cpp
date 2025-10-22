#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int num[15];
    for(int i = 0; i < 15; i++)
        cin >> num[i];

    sort(num, num+15);

    // for(int i = 0; i < 15; i++)
    //     cout << num[i] << " ";

    int a = num[0];
    int b = num[1];
    int c;
    int a_b_c_d = num[14];
    int b_c_d = num[13];
    int c_d = b_c_d - b;
    if(a+b == num[2]) c = num[3];
    if(a+b != num[2]) c = num[2];
    int d = c_d - c;

    cout << a << " " << b << " " << c << " " << d;
       

    return 0;
}