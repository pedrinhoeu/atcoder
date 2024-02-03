#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
vector<vector<int>> adj;

vector<bool> visited;
vector<int> tin, low;
vector<pair<ll, ll>> pontes;
int timer;

void dfs(int v, int p = -1) {
    visited[v] = true;
    tin[v] = low[v] = timer++;
    for (int to : adj[v]) {
        if (to == p) continue;
        if (visited[to]) {
            low[v] = min(low[v], tin[to]);
        } else {
            dfs(to, v);
            low[v] = min(low[v], low[to]);
            if (low[to] > tin[v]) pontes.push_back({v, to});
        }
    }
}

void find_bridges() {
    timer = 0;
    visited.assign(n+1, false);
    tin.assign(n+1, -1);
    low.assign(n+1, -1);
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) dfs(i);
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll m;
    cin >> n >> m;
    adj.resize(n+1);
    for(int i = 0; i < m; i++){
        ll v, u;
        cin >> v >> u;
        adj[v].push_back(u);
        adj[u].push_back(v);
    }
    find_bridges();
    cout << pontes.size() << "\n";
}