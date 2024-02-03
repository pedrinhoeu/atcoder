#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solvetask(){
    ll n, a;
    cin >> n >> a;
    cout << (n%500 <= a ? "Yes\n": "No\n");
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll t = 1;
    while(t--) solvetask();
}