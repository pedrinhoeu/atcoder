#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    ll l = 2, m = 1;
    n--;
    while(n--){
        ll temp = l;
        l = m;
        m = temp+l;
    }
    cout << m << "\n";
}