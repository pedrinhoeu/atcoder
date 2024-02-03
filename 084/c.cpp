#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solvetask(){
    ll n;
    cin >> n;
    vector<array<ll, 3>> ops(n);
    for (int i = 0; i < n-1; i++) cin >> ops[i][0] >> ops[i][1] >> ops[i][2];
    vector<ll> resp(n);

    for (int i = 0; i < n-1; i++){
        ll at = 0;
        for (int j = i; j < n-1; j++){
            if(at <= ops[j][1]) at = ops[j][1] + ops[j][0];
            else at += (ops[j][2] - 1 - ((at - ops[j][1]-1)%ops[j][2])) + ops[j][0];
            
        }
        
        cout << at << "\n";
    }
    cout << 0 << "\n";
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll t = 1;
    while(t--) solvetask();
}