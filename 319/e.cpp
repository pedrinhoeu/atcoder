#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n, k, x, y, a, b;
    cin >> n >> x >> y;
    vector<ll> bus(9, 1e18);
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        bus[a] = min(b, bus[a]);
    }    
    
}