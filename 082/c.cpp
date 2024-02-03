#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solvetask(){
    ll n;
    cin >> n;
    map<ll, ll> mp;
    for (int i = 0; i < n; i++){
        ll a;
        cin >> a;
        mp[a]++;
    }

    ll resp = 0;
    for (auto i: mp){
        if(i.first > i.second) resp += i.second;
        else resp += i.second - i.first;
    }
    cout << resp << "\n";
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll t = 1;
    while(t--) solvetask();
}