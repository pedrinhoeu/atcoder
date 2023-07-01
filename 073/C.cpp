#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n, resp = 0, a, INF = 1000000000;
    cin >> n;
    vector<long long> nums(INF, 0);
    while(n--){
        cin >> a;
        if(nums[a-1] == 0){
            resp += 1;
            nums[a-1] = 1;
        }
        else{
            resp -= 1;
            nums[a-1] = 0;
        }
    }
    cout << resp << endl;
}