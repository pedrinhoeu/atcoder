#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string pala;
    cin >> pala;
    if((pala[0] == pala[1] && pala[1] == pala[2]) || (pala[3] == pala[1] && pala[1] == pala[2])) cout << "Yes\n";
    else cout << "No\n";
}