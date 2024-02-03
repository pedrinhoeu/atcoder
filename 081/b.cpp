#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    ll resp = 1e18, a;

    for (int i = 0; i < n; i++){
        cin >> a;
        ll temp = 0;
        while(a%2==0){
            temp++;
            a /= 2;
        }
        resp = min(temp, resp);
    }
    

    cout << resp << "\n";
    
}