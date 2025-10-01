#include <iostream>
#include <algorithm>

using namespace std;

int N;
int nums[2000];

int main() {
    cin >> N;

    for (int i = 0; i < 2 * N; i++) {
        cin >> nums[i];
    }

    // Please write your code here.
    sort(nums, nums + 2*N);

    int max = nums[0] + nums[2*N-1];
    //cout << nums[0] << " " << nums[2*N-1] << endl;
    for (int i = 0; i < N; i++) {
        if(max < nums[i] + nums[2*N-1-i])
            max = nums[i] + nums[2*N-1-i];
    }
    cout << max;
    return 0;
} 