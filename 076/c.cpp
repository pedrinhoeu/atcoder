#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string pala, comp;
    cin >> pala >> comp;

    ll n = pala.size(), m = comp.size();
    ll resp = -1;
    for (int i = 0; i <= n-m; i++){
        bool veri = true;
        for (int j = 0; j < m; j++){
            if((pala[i+j] != '?' && pala[i+j] != comp[j]))veri = false;    
        }
        if(veri) resp = i;
    }
    
    if(resp < 0) cout << "UNRESTORABLE\n";
    else{
        ll temp = 0;
        for (int i = resp; i < resp+m; i++){
            pala[i] = comp[temp++];
        }
        for (int i = 0; i < n; i++){
            if(pala[i] == '?' )pala[i] = 'a';
        }
        cout << pala << "\n";
    }
}