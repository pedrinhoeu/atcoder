#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solvetask(){
    ll n;
    cin >> n;
    map<ll, ll> mp;
    ll a, resp = 0;
    for (int i = 0; i < n; i++){
        cin >> a;
        mp[a] += 1;
        if(mp[a] == 1) resp++;
    }
    cout << resp << "\n";
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll t = 1;
    while(t--) solvetask();
}