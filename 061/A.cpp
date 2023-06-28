#include<bits/stdc++.h>

using namespace std;

int main(){
    int ci, rua;
    cin >> ci >> rua;
    int cid[ci]{0}, a, b;
    for (int i = 0; i < rua; i++){
        cin >> a >> b;
        cid[a-1] += 1;
        cid[b-1] += 1;
    }
    for (int i = 0; i < ci; i++){
        cout << cid[i] << endl;
    }
}