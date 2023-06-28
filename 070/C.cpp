#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a,long long b){
    if(b == 0) return a;
    return gcd(b,a%b);
}

long long lcm(long long a,long long b){
    long long g = gcd(a,b);
    return a / g * b;
}

int main(){
    long long n;
    cin >> n;
    vector<long long> nums(n);
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }
    long long resp = lcm(nums[0], 1);
    for (int i = 1; i < n; i++){
        resp = lcm(resp, nums[i]);
    }
    cout << resp << endl;
}