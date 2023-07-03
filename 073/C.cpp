#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n, resp = 0, a;
    cin >> n;
    bitset<1000000000> nums;
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