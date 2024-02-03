#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n, resp = 0, a;
    cin >> n;
    map<ll, bool> nums;
    while(n--){
        cin >> a;
        if(!nums[a]){
            resp += 1;
            nums[a] = true;
        }
        else{
            resp -= 1;
            nums[a] = false;
        }
    }
    cout << resp << endl;
}