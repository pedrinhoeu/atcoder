#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solvetask(){
    string s, t;
    cin >> s >> t;
    sort(s.begin(), s.end());
    sort(t.rbegin(), t.rend());
    if(s < t) cout << "Yes\n";
    else cout << "No\n";
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll t = 1;
    while(t--) solvetask();
}