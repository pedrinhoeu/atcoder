#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solvetask(){
    ll x, a, b, c;
    cin >> a >> b >> c >> x;
    ll resp = 0;
    for (int i = 0; i <= a; i++){
        for (int j = 0; j <= b; j++){
            for (int k = 0; k <= c; k++){
                if(i*500 + j*100 + k*50 == x) resp++;
            }            
        }
    }
    cout << resp << "\n";
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll t = 1;
    while(t--) solvetask();
}