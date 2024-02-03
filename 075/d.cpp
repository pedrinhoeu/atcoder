#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct pt{
    ll x, y;
};

int main(){
    //cin.tie(0)->sync_with_stdio(0);
    ll n, k;
    cin >> n >> k;
    vector<pt> pts(n);
    vector<ll> x, y;
    for (int i = 0; i < n; i++){
        cin >> pts[i].x >> pts[i].y;
        x.push_back(pts[i].x);
        y.push_back(pts[i].y);
    }
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    ll resp = abs(x[n-1] - x[0])*abs(y[n-1] - y[0]);
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            for (int l = 0; l < n; l++){
                for (int m = l+1; m < n; m++){
                    ll temp = 0;
                    ll xl = x[i], xr = x[j];
                    ll yd = y[l], yt = y[m];
                    for (int z = 0; z < n; z++){
                        if(xl <= pts[z].x && xr >= pts[z].x && yd <= pts[z].y && yt >= pts[z].y) temp++;
                    }
                    if(temp >= k) resp = min(resp, abs(xr - xl)*abs(yt - yd));
                }
            }
        }        
    }
    cout << resp << "\n";
}