#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, min= 100000, max=0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a;
        if(a > max){
            max = a;
        }
        if(a < min){
            min = a;
        }
    }
    cout << max-min << endl;
}