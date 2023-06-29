#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, resp;
    cin >> n;
    string a, b;
    cin >> a >> b;
    vector<bool> pe(n, false);
    for (int i = 0; i < n; i++){
        if(a[i] == b[i]){
            pe[i] = true;
        }
        else{
            pe[i] = false;
        }
    }
    resp = 3;
    if(!pe[0]){
        resp *= 2;
        for (int i = 2; i < n; i++){
            if(pe[i-1]){
                resp = (resp * 2) % 1000000007;
                if(!pe[i]){
                    i+=1;
                }
            }
            else{
                if(!pe[i]){
                    resp = (resp * 3) % 1000000007;
                    i+=1;
                }
            }
        }
    }
    else{
        for (int i = 1; i < n; i++){
            if(pe[i-1]){
                resp = (resp * 2) % 1000000007;
                if(!pe[i]){
                    i+=1;
                }
            }
            else{
                if(!pe[i]){
                    resp = (resp * 3) % 1000000007;
                    i+=1;
                }
            }
        }
    }
    
    cout << resp << endl;
}