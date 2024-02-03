#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll x, y, z;
    cin >> x >> y >> z;
    x -= z;
    ll resp = 0;
    while(y+z <= x){
        resp++;
        x -= (y+z);
    }
    cout << resp << "\n";
}