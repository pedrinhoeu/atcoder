#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll H, W;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin >> H >> W;
    string temp, a;
    vector<string> map;
    temp = '.'*(W+2);
    map.push_back(temp);
    for (int i = 0; i < H; i++){
        cin >> a;
        a = '.'+a+'.';
        map.push_back(a);
    }
    map.push_back(temp);
    for (int i = 1; i <= H; i++){
        for (int j = 1; j <= W; j++){
            if(map[i][j] == '.'){
                ll comp = 0;
                if(map[i-1][j-1] == '#') comp++;
                if(map[i-1][j] == '#') comp++;
                if(map[i-1][j+1] == '#') comp++;
                if(map[i][j-1] == '#') comp++;
                if(map[i][j+1] == '#') comp++;
                if(map[i+1][j+1] == '#') comp++;
                if(map[i+1][j] == '#') comp++;
                if(map[i+1][j-1] == '#') comp++;
                map[i][j] = '0'+comp;
            }
        }
    }

    for (int i = 1; i <= H; i++){
        for (int j = 1; j <= W; j++){
            cout << map[i][j];
        }
        cout << "\n";
    }
    
}