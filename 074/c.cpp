#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solvetask(){
    ll a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    vector<ll> agua, sal;

    for (int i = 0; i*a*100 <= f; i++){
        for (int j = 0; i*a*100 + j*b*100 <= f; j++){
            agua.push_back(a*i*100+j*b*100);
        }
    }
    for (int i = 0; i*c <= f; i++){
        for (int j = 0; i*c + j*d <= f; j++){
            sal.push_back(c*i+j*d);
        }
    }

    ll x = a*100, y = 0;
    double comp = 0;
    for(auto i: agua){
        for(auto j:sal){
            if(i+j != 0 && i+j <= f && i*e >= j*100 && (100.0)*j/(i+j) > comp){
                x = i;
                y = j;
                comp = (100.0)*j/(i+j);
            }
        }
    }
    cout << x+y << " " << y << "\n";
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll t = 1;
    while(t--) solvetask();
}