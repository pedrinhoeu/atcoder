#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solvetask(){
    ll n, k;
    cin >> n >> k;
    
    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= n; j++){
            if(i*10000 + j*5000 + (n - (i+j))*1000 == k && (n - (i+j)) >= 0){
                cout << i << " " << j << " " << n-(i+j) << "\n";
                return;
            }
        }
    }
    cout << "-1 -1 -1 \n";
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll t = 1;
    while(t--) solvetask();
}