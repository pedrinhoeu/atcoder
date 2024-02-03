#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solvetask(){
    ll a, b;
    cin >> a >> b;
    ll temp = 1;
    while(temp <= b) temp*= 10;
    temp = a*temp + b;
    
    for (int i = 1; i*i <= temp; i++){
        if(i*i == temp){
            cout << "Yes\n";
            return;
        }
    }
    
    cout << "No\n";
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll t = 1;
    while(t--) solvetask();
}