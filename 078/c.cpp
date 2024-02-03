#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n, m;
    cin >> n >> m;
    ll temp = 1;
    for (int i = 0; i < m; i++) temp *= 2;
    
    ll resp = (1900*m + 100*(n-m))*temp;
    cout << resp << "\n";
}