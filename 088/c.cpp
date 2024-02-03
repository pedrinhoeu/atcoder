#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solvetask(){
    vector<vector<ll>> nums(3, vector<ll>(3));
    for (int i = 0; i < 3; i++) cin >> nums[0][i];
    for (int i = 0; i < 3; i++) cin >> nums[1][i];
    for (int i = 0; i < 3; i++) cin >> nums[2][i];
    
    bool veri = true;
    if(nums[0][0] - nums[0][1] != nums[1][0] - nums[1][1] || nums[0][0] - nums[0][1] != nums[2][0] - nums[2][1]) veri = false;
    if(nums[0][0] - nums[0][2] != nums[1][0] - nums[1][2] || nums[0][0] - nums[0][2] != nums[2][0] - nums[2][2]) veri = false;

    if(nums[0][0] - nums[1][0] != nums[0][1] - nums[1][1] || nums[0][0] - nums[1][0] != nums[0][2] - nums[1][2]) veri = false;
    if(nums[0][0] - nums[2][0] != nums[0][1] - nums[2][1] || nums[0][0] - nums[2][0] != nums[0][2] - nums[2][2]) veri = false;

    cout << (veri?"Yes\n":"No\n");
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll t = 1;
    while(t--) solvetask();
}