#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solvetask(){
    ll n, a, remove = 0;
    cin >> n;
    vector<ll> nums(1e5+1);
    for (int i = 0; i < n; i++){
        cin >> a;
        if(nums[a]) remove++;
        nums[a] = 1;
    }
    if(remove&1) remove++;
    cout << n - remove << "\n";
    
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll t = 1;
    while(t--) solvetask();
}