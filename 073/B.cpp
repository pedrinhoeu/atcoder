#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, resp = 0, a, b;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        resp += b-a+1;
    }
    cout << resp << endl;
}