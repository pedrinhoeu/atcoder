#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solvetask(){
    ll a, b;
    cin >> a >> b;
    string pala;
    cin >> pala;
    bool veri = true;
    if(pala[a] != '-') veri = false;
    for (int i = 0; i < a+b+1; i++) if((pala[i] - '0' < 0 || pala[i] - '0' > 9) && i != a) veri = false;
    if(veri) cout << "Yes\n";
    else cout << "No\n";
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll t = 1;
    while(t--) solvetask();
}