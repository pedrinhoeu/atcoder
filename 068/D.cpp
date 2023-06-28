#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin >> n;
    cout << 2 << endl;
    if(n%2 == 0){
       cout << (n/2)+1 << " " << (n/2)+1 << endl; 
    }
    else{
        cout << (n/2)+2 << " " << (n/2) << endl; 
    }

}