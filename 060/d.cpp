#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solvetask(){
    ll n, w;
    cin >> n >> w;

    multiset<ll> pri, sec, ter, qua;
    ll val;
    for (int i = 0; i < n; i++){
        ll a, b;
        cin >> a >> b;
        if(i == 0){
            val = a;
            pri.insert(b);
        }
        else if(a == val) pri.insert(b);
        else if(a == val+1) sec.insert(b);
        else if(a == val+2) ter.insert(b);
        else if(a == val+3) qua.insert(b);
    }

    ll resp = 0;
    for (int i = 0; i <= pri.size(); i++){
        for (int j = 0; j <= sec.size(); j++){
            for (int k = 0; k <= ter.size(); k++){
                for (int l = 0; l <= qua.size(); l++){
                    
                    if(i*val + (val+1)*j + k*(val+2) + l*(val+3) <= w){
                        ll I = i, J = j, K = k, L = l;
                        ll temp = 0, comp = 0;
                        if(I)for (auto t = --pri.end(); t != pri.begin() && I--; t--) temp += *t;
                        if(I) temp += *pri.begin();
                        if(J)for (auto t = --sec.end(); t != sec.begin() && J--; t--) temp += *t;
                        if(J) temp += *sec.begin();
                        if(K)for (auto t = --ter.end(); t != ter.begin() && K--; t--) temp += *t;
                        if(K) temp += *ter.begin();
                        if(L)for (auto t = --qua.end(); t != qua.begin() && L--; t--) temp += *t;
                        if(L) temp += *qua.begin();
                        
                        resp = max(resp, temp);
                    }
                }
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