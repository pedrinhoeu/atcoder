#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string pala1, pala2;
    cin >> pala1 >> pala2;
    reverse(pala2.begin(), pala2.end());
    if(pala1 == pala2) cout << "YES\n";
    else cout << "NO\n";
}