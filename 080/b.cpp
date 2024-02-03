#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string pala;
    cin >> pala;

    ll num = 0, som = 0;
    for (auto i: pala){
        num *= 10;
        num += i - '0';
        som += i - '0';
        
    }
    if(num%som) cout << "No\n";
    else cout << "Yes\n";
}