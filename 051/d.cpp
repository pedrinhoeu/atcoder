#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, m;
vector<ll> edge;
vector<vector<array<ll, 3>>> adj;

void dkstra(ll v, ll u){
    
}

void solvetask(){
    cin >> n >> m;
    edge.resize(m);
    adj.resize(n+1);
    for (int i = 0; i < n; i++){
        ll u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w, i});
        adj[v].push_back({u, w, i});
    }

    for (int i = 1; i <= n; i++){
        for (int j = i+1; j <= n; j++){
            /* code */
        }
        
    }
    
    
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll t = 1;
    while(t--) solvetask();
}