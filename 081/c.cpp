#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n, k;
    cin >> n >> k;
    vector<ll> nums(n+1);

    ll a;
    for (int i = 0; i < n; i++){
        cin >> a;
        nums[a]++;
    }
    sort(nums.rbegin(), nums.rend());

    ll temp = 0;
    for (int i = 0; i < k; i++){
        temp += nums[i];
    }
    cout << n - temp << "\n";
    
}