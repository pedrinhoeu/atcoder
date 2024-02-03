#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    ll resp = 0;
    while(resp*resp <= n) resp++;
    resp--;
    cout << resp*resp << "\n";
}