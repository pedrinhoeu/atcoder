#include <bits/stdc++.h>

using namespace std;

int main(){
    string pala;
    cin >> pala;
    int a[26]{0};
    for (int i = 0; i < pala.length(); i++){
        a[pala[i]-'0'-49] += 1;
    }
    bool repe = true;
    for (int i = 0; i < 26; i++){
        if(a[i] > 1){
            repe = false;
        } 
    }
    if(repe){
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    }
}