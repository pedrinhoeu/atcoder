#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<long long> nums(n);
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    long long menor = 0, maior = 0;
    for (int i = 0; i < n-1; i++){
        if(nums[i] == nums[i+1]){
            menor = maior;
            maior = nums[i];
            i += 1;
        }
    }
    cout << maior*menor << endl;
}