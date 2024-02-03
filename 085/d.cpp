#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, h, mx = 0;

bool veri(ll val, vector<array<ll, 2>> &nums){
    ll temp = 0;
    for (int i = 0; i < n; i++){
        if(nums[i][0] > mx){
            temp += nums[i][0];
            val--;
        }
        if(val == 0) break;
    }
    temp += val*mx;
    if(temp >= h) return true;
    return false;
}

void solvetask(){
    cin >> n >> h;
    vector<array<ll, 2>> nums(n);
    for (int i = 0; i < n; i++){
        cin >> nums[i][1] >> nums[i][0];
        mx = max(mx, nums[i][1]);
    } 
    sort(nums.rbegin(), nums.rend());
    
    ll resp = 1e18, l = 1, r = 1e9;
    while(l <= r){
        ll mid = (l+r)/2;
        if(veri(mid, nums)){
            resp = min(resp, mid);
            r = mid-1;
        }
        else l = mid+1;
    }
    cout << resp << "\n";
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll t = 1;
    while(t--) solvetask();
}