#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    vector<ll> nums(n);
    ll mn = 1e18, mx = -1e18;
    for (int i = 0; i < n; i++){
        cin >> nums[i];
        mn = min(mn, nums[i]);
        mx = max(mx, nums[i]);
    } 
    vector<pair<ll, ll>> resp;

    if(abs(mn) > mx){
        for (int i = 0; i < n; i++){
            if(nums[i]){
                
            }
        }
    }
    
    

    cout << resp.size() << "\n";
    for (auto i: resp){
        cout << i.first << " " << i.second << "\n";
    }
    
}