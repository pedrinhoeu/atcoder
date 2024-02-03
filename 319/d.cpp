#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool veri(ll &n, vector<ll> &nums, ll &k){
    ll temp = 0, at = 0;
    for(auto i: nums){
        if(at + i > n){
            at = i+1;
            temp += 1;
        }
        else if(at + i == n){
            at = 0;
            temp += 1;
        }
        else{
            at += i+1;
        }
    }
    if(at != 0) temp++;
    return k >= temp;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n, k;
    cin >> n >> k;
    vector<ll> nums(n);
    ll m = 0, mx = 0;
    for (int i = 0; i < n; i++){
        cin >> nums[i];
        m += nums[i] + 1;
        mx = max(mx, nums[i]);
    }

    ll l = mx, r = m, resp = m;
    while(l <= r){
        ll mid = (l+r)/2;
        if(veri(mid, nums, k)){
            r = mid-1;
            resp = min(mid, resp);
        }
        else{
            l = mid+1;
        }
    }
    cout << resp << "\n";
}