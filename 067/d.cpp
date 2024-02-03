#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, m;
vector<vector<ll>> adj;
vector<ll> visi;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    cin >> n;
    adj.resize(n+1);
    visi.resize(n+1);

    for (int i = 0; i < n-1; i++){
        ll v, u;
        cin >> v >> u;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    queue<array<ll, 3>> q;
    q.push({1, 1});
    q.push({n, 2});
    visi[1] = true;
    visi[n] = true;
    ll s=0, f=0;
    while(!q.empty()){
        auto temp = q.front();
        q.pop();
        ll v = temp[0], p = temp[1];
        for (auto ch: adj[v]) if(!visi[ch]){
            q.push({ch, p});
            visi[ch] = true;
            if(p == 1) f++;
            else s++;
        }
    }
    if(s >= f) cout << "Snuke\n";
    else cout << "Fennec\n"; 
}