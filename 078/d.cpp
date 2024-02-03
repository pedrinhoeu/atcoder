#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n, z, w;
    cin >> n >> z >> w;
    vector<ll> nums(n);
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }
    ll resp = abs(nums[n-1] - w);
    if(n > 1) resp = max(resp, abs(nums[n-1] - nums[n-2]));
    
    cout << resp << "\n";
}