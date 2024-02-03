#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    vector<ll> pri, seq, tri;
    pri.push_back(0);
    tri.push_back(0);
    ll a;
    for (int i = 0; i < n; i++){
        cin >> a;
        pri.push_back(a);
    }

    for (int i = 0; i < n; i++){
        cin >> a;
        seq.push_back(a);
    }

    for (int i = 0; i < n; i++){
        cin >> a;
        tri.push_back(a);
    }

    sort(pri.begin(), pri.end());
    sort(seq.begin(), seq.end());
    sort(tri.begin(), tri.end());

    ll resp = 0;
    for (int i = 0; i < n; i++){
        ll l = 0, r = n;
        ll q1;
        while(l <= r){
            ll mid = (l+r)/2;
            if(pri[mid] < seq[i]){
                q1 = mid;
                l = mid+1;
            }
            else r = mid-1;
        }
        l = 0;
        r = n;
        ll q2 = 0;
        while(l <= r){
            ll mid = (l+r)/2;
            if(tri[mid] > seq[i]){
                q2 = n - mid + 1;
                r = mid-1;
            }
            else l = mid+1;
        }
        resp += q1*q2;
    }
    cout << resp << "\n";
}