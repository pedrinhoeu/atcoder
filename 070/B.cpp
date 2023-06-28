#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int resp = min(b, d) - max(a, c);
    cout << max(resp, 0) << endl;

}