#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<vector<pair<ll, ll>>> adj;
vector<ll> dist;

void dfs(ll v, ll p, ll d){
    dist[v] = d;
    for(auto ch: adj[v]) if(ch.first != p){
        dfs(ch.first, v, d+ch.second);
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    adj.resize(n+1);
    dist.resize(n+1);
    for (int i = 0; i < n-1; i++){
        ll v, u, w;
        cin >> v >> u >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    ll q, k;
    cin >> q >> k;
    dfs(k, 0, 0);
    for (int i = 0; i < q; i++){
        ll v, u;
        cin >> v >> u;
        cout << dist[v] + dist[u] << "\n";
    }
    
}