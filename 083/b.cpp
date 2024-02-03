#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solvetask(){
    ll n, a, b;
    cin >> n >> a >> b;
    ll resp = 0, at = 1;
    while(at <= n){
        ll temp = 0, cl = at;
        while(cl){
            temp += cl%10;
            cl /= 10;
        }
        if(temp >= a && temp <= b) resp+=at;
        at++;
    }
    cout << resp << "\n";
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll t = 1;
    while(t--) solvetask();
}