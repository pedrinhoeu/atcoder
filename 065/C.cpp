#include <bits/stdc++.h>

using namespace std;

int main(){
    long long c, m, aux, resp;
    cin >> c >> m;
    if(!(c == m + 1 or m == c + 1 or c == m)){
        cout << 0 << endl;
    }
    else{
        if(c < m){
            aux = c;
            c = m;
            m = aux;
        }
        resp = 1;
        while(c > 0){
            resp = (resp*c)%1000000007;
            c -= 1;
            if(m > 0){
                resp = (resp*m)%1000000007;
            }
            m -= 1;
        }
        if(m == c){
            cout << (resp*2)%1000000007 << endl;
        }
        else{
            cout << (resp)%1000000007 << endl;
        }
    }
}