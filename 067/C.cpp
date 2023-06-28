#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, a, ac=0, resp = 1000000000000;
    cin >> n;
    vector<long long> soms(n, 0);
    for (long long i = 0; i < n; i++){
        cin >> a;
        ac += a;
        soms[i] = ac;
    }
    for (long long i = 0; i < n-1; i++){
        if(abs(soms[n-1] - soms[i] - soms[i]) < resp){
            resp = abs(soms[n-1] - soms[i] - soms[i]);
        }
    }
    cout << resp << endl;
}