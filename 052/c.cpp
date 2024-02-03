#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll N = 1e3 + 10;

void solvetask(){
    ll n;
    cin >> n;
    vector<ll> prims(N, 1);

    prims[0] = 0;
    prims[1] = 0;
    for (ll i = 2; i < N; i++){
        if(prims[i]) for (ll j = i*i; j < N; j+=i){
            prims[j] = 0;
        }
    }

    map<ll, ll> mp;
    for (int i = 2; i <= n; i++){
        ll temp = i, div = 2;
        while(temp > 1){
            if(prims[div]){
                if(temp%div == 0){
                    mp[div]++;
                    temp /= div;
                }
                else div++;
            }
            else div++;
            if(temp < div) break;
        }
    }
    ll resp = 1;
    for(auto i: mp){
        resp = (resp*(i.second + 1))%1000000007;
    } 
    cout << resp << "\n";
    
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll t = 1;
    while(t--) solvetask();
}