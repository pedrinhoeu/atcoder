#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    vector<vector<ll>> dias(n, vector<ll>(10));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 10; j++){
            cin >> dias[i][j];
        }
    }
    vector<vector<ll>> ops(n, vector<ll>(11));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < 11; j++){
            cin >> ops[i][j];
        }
    }

    ll resp = -1e18;
    for (int i = 1; i < (1<<10); i++){
        ll temp = 0;
        for (int j = 0; j < n; j++){
            ll temp2 = 0;
            for (int k = 0; k < 10; k++){
                if((1 << (k)) & i && dias[j][k]) temp2++;
            }
            temp += ops[j][temp2];
        }
        resp = max(resp, temp);
    }
    cout << resp << "\n";
}