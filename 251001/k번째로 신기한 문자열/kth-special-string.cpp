#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n, k;
string t;
string str[100];
string str_include_T[100];

int main() {
    cin >> n >> k >> t;

    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    // Please write your code here.
    sort(str, str+n);
    int m = 0;
    for (int i = 0; i < n; i++) {
        bool exist = true;
        for(int j = 0; j < t.length(); j++) {
            if(str[i][j] != t[j])
            {
                exist = false;
                break;
            }
        }
        if(exist) 
        {
            //cout << str[i] << endl;
            str_include_T[m] = str[i];
            m++;
        }
    }

    cout << str_include_T[k-1];
    return 0;
}