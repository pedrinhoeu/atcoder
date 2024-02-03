#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solvetask(){
    ll x, a, b;
    cin >> x >> a >> b;
    cout << (x-a)%b << "\n";
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll t = 1;
    while(t--) solvetask();
}