#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int num[n], resp = 0;
    for (int i = 0; i < n; i++){
        cin >> num[i];
        resp += num[i];
    }
    int i=0;
    sort(num, num+n);
    while(i < n){
        if(resp%10 != 0){
            break;
        }
        if(num[i]%10 != 0){
            resp -= num[i];
        }
        i++;
    }
    if(resp%10 != 0){
        cout << resp << endl;
    }
    else{
        cout << 0 << endl;
    }
    
}