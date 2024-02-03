#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n, k;
    cin >> n >> k;
    ll resp = 1;
    while(n--) resp = min(resp*2, resp+k);
    
    cout << resp << "\n";
}