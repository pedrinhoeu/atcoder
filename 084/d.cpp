#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll N = 1e5 + 10;
vector<ll> resp(N), sieve(N);

void Sieve(){
    sieve[0] = 1;
    sieve[1] = 1;
    for (ll i = 2; i < N; i++) if(sieve[i] == 0)for (ll j = i*i; j < N; j+=i)sieve[j] = 1;
}

void solvetask(){
    ll q;
    cin >> q;
    Sieve();
    for (int i = 1; i < N; i++){
        resp[i] = resp[i-1];
        if(sieve[i] == 0 && sieve[(i+1)/2] == 0) resp[i]++;
    }
    while(q--){
        ll l, r;
        cin >> l >> r;
        cout << resp[r] - resp[--l] << "\n";
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll t = 1;
    while(t--) solvetask();
}