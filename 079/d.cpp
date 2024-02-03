#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> dist(10, vector<ll> (10));
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            cin >> dist[i][j];
        }
    }
    
    for (int k = 0; k < 10; k++) {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (dist[i][j] > (dist[i][k] + dist[k][j]))
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

    ll resp = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            ll a;
            cin >> a;
            if(a != -1) resp += dist[a][1];
        }
    }
    cout << resp << "\n";

}