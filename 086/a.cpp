#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solvetask(){
    ll a, b;
    cin >> a >> b;
    if(a%2 == 0 || b%2 == 0) cout << "Even\n";
    else cout << "Odd\n";
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll t = 1;
    while(t--) solvetask();
}