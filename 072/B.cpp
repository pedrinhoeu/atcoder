#include <bits/stdc++.h>

using namespace std;

int main(){
    string pala;
    cin >> pala;
    for (int i = 0; i < pala.length(); i+=2){
        cout << pala[i];
    }
    cout << endl;
}