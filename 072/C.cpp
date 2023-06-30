#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, a, max=0;
    cin >> n;
    vector<long long> nums(100005, 0);
    for (int i = 0; i < n; i++){
        cin >> a;
        if(a-1 > 0){
            nums[a-1] += 1;
        }
        if(a-2 > 0){
            nums[a-2] += 1;
        }
        nums[a] += 1;
        
    }
    for (int i = 0; i < 100005; i++){
        if(nums[i] > max){
            max = nums[i];
        }
    }
    cout << max << endl;
}