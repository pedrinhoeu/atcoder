#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    string pala = "";
    pala += '1';
    vector<ll> divs;
    for (int i = 1; i <= 9; i++) if(n%i == 0) divs.push_back(i);
    
    ll min;
    for (int i = 1; i <= n; i++){
        min = 10;
        for(auto k: divs){
            if(i%(n/k) == 0){
                min = k;
                break;
            }
        }
        if(min == 10) pala += '-';
        else pala += min + '0';
    }
    cout << pala << "\n";
}