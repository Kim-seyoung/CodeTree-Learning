#include <iostream>

using namespace std;

int n;
int arr[10];

// 최대공약수 함수 (유클리드 호제법)
int gcd(int n, int m) {
    while (m != 0) {
        int temp = n % m;
        n = m;
        m = temp;
    }
    return n;
}

// 최소공배수 함수
int Icm(int n, int m) {
    int gcdNum = gcd(n, m);
    int result = n*m / gcdNum;
    return result;
}

// 재귀 함수
int IcmArray(int n) {
    if(n == 2)
        return Icm( arr[0], arr[1] );
    return Icm( IcmArray(n-1), arr[n-1] );
} 

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    cout << IcmArray(n);
    return 0;
}