#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solvetask(){
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a+b == c+d) cout << "Balanced\n";
    else if(a+b > c+d) cout << "Left\n";
    else cout << "Right\n";
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll t = 1;
    while(t--) solvetask();
}