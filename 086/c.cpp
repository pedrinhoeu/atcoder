#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solvetask(){
    ll n;
    cin >> n;
    vector<array<ll, 3>> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i][0] >> nums[i][1] >> nums[i][2];
    
    bool veri = true;
    ll x = 0, y = 0, at = 0;
    for (int i = 0; i < n; i++){
        ll temp = nums[i][0] - at;
        if(temp < abs(nums[i][1] - x) + abs(nums[i][2] - y)) veri = false;
        else if((temp - (abs(nums[i][1] - x) + abs(nums[i][2] - y)))&1) veri = false;
        
        at += temp;
        x = nums[i][1];
        y = nums[i][2];
    }
    cout << (veri ? "Yes\n" : "No\n");
    
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll t = 1;
    while(t--) solvetask();
}