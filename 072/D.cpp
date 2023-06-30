#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, max=0;
    cin >> n;
    vector<long long> nums(n, 0);
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }
    for (int i = 1; i < n; i++){
        if(nums[i-1] == i and nums[i] == i+1){
            max += 1;
            swap(nums[i-1], nums[i]);
        }
        else if(nums[i-1] == i){
            max += 1;
            nums[i-1] = 0;
        }
    }
    if(nums[n-1] == n){
        max += 1;
    }
    cout << max << endl;
}