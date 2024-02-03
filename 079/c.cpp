#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string pala;
    cin >> pala;
    
    for (int i = 0; i < 8; i++){
        ll temp = pala[0] - '0';
        for (int j = 0; j < 3; j++){
            if((1 << j)&i)temp += pala[j+1] - '0';
            else temp -= pala[j+1] - '0';
        }
        if(temp == 7){
            cout << pala[0];
            for (int j = 0; j < 3; j++){
                if((1 << j)&i)cout << "+";
                else cout << "-";
                cout<< pala[j+1];
            }
            cout << "=7\n";
            return 0;
        }
    }
}