#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a, b, c;
    cin >> a >> b >> c;
    
    if(c - b <= 0){
        cout << "delicious" << endl;
    }
    else if(c - b <= a){
        cout << "safe" << endl;
    }
    else{
        cout << "dangerous" << endl;
    }
}