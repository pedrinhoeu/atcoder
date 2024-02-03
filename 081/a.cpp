#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, m;
vector<vector<ll>> adj;
vector<ll> visi;
ll temp = 0, resp = 0;

void dfs(ll v, ll p){
    if(visi[v]) return;
    visi[v] = true;
    temp++;
    if(temp == n) resp++;
    for (auto ch: adj[v]) if(ch != p){
        dfs(ch, v);
    }
    temp--;
    visi[v] = false;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    
    cin >> n >> m;
    adj.resize(n+1);
    visi.resize(n+1);

    for (int i = 0; i < m; i++){
        ll v, u;
        cin >> v >> u;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, 0);
    
    cout << resp << "\n";
}