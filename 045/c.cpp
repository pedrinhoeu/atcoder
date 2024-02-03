#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string pala;
    cin >> pala;
    ll resp = 0, at = 0;
    for (int i = 0; i < (1 << pala.size()-1); i++){
        for (int j = 0; j < pala.size(); j++){
            at += pala[j] - '0';
            if(i & (1<<j)){
                resp += at;
                at = 0;
            }
            else if(j < pala.size()-1){
                at *= 10;
            }
        }
        resp += at;
        at = 0;
    } 
    cout << resp << "\n";
}