#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, s;
    cin >> n >> s;
    vector<long long> gravs(n);
    for (int i = 0; i < n; i++){
        cin >> gravs[i];
    }
    sort(gravs.begin(), gravs.end());
    long long resp=0;
    for (int i = n-s; i < n; i++){
        resp += gravs[i];
    }
    cout << resp << endl;
}