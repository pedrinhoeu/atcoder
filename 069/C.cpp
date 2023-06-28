#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, dois=0, quat = 0;
    cin >> n;
    vector<long long> num(n);
    for (int i = 0; i < n; i++){
        cin >> num[i];
        if(num[i]%4 == 0){
            quat += 1;
        }
        else if(num[i]%2 == 0){
            dois += 1;
        }
    }
   
    if((dois/2)+quat >= n/2){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}