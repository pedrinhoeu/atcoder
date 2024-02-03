#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solvetask(){
    ll n;
    cin >> n;
    vector<ll> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    sort(nums.rbegin(), nums.rend());
    ll a = 0, b = 0;
    for (int i = 0; i < n; i++){
        if(i&1) b += nums[i];
        else a += nums[i];
    }
    cout << a - b << "\n";
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll t = 1;
    while(t--) solvetask();
}