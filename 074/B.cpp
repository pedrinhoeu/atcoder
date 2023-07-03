#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, k, resp = 0;
    cin >> a >> b;
    for (int i = 0; i < a; i++){
        cin >> k;
        resp += min(k, b-k);
    }
    cout << resp*2 << "\n";
}