#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    long long bots[n];
    for(int i = 0; i < n; i++){
        cin >> bots[i];
    }
    long long count = 0, i = 0, achou = false, aux;
    while(bots[i] != -1){
        if(i == 1){
            achou = true;
            break;
        }
        count += 1;
        aux = bots[i];
        bots[i] = -1;
        i = aux-1;
    }
    if(achou){
        cout << count << endl;
    }
    else{
        cout << -1 << endl;
    }
}