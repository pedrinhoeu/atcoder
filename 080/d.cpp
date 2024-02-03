#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n, c;
    cin >> n >> c;

    vector<ll> add(2e5 + 10);

    for (int i = 0; i < n; i++){
        ll s, t, c;
        cin >> s >> t >> c;
        add[(s)*2 - 1]++;
        add[t*2]--;
    }

    ll resp = 0, at = 0;

    for (int i = 0; i < 2e5 + 10; i++){
        at += add[i];
        resp = max(resp, at);
    }
    cout << resp << "\n";
}