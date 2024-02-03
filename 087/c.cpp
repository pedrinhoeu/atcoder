#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solvetask(){
    ll n;
    cin >> n;
    vector<array<ll, 2>> mat(n);
    for (int i = 0; i < n; i++) cin >> mat[i][0];
    for (int i = 0; i < n; i++) cin >> mat[i][1];

    for (int i = 1; i < n; i++) mat[i][0] += mat[i-1][0];
    mat[0][1] += mat[0][0];
    for (int i = 1; i < n; i++) mat[i][1] += max(mat[i][0], mat[i-1][1]);
    
    cout << mat[n-1][1] << "\n";
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll t = 1;
    while(t--) solvetask();
}