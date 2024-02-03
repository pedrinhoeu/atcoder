#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solvetask(){
    ll x, y;
    cin >> x >> y;
    ll cnt = 0;
    while(x <= y){
        cnt++;
        x*=2;
    }
    cout << cnt << "\n";
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll t = 1;
    while(t--) solvetask();
}