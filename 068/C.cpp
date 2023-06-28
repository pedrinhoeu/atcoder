#include <bits/stdc++.h>

using namespace std;

int main(){
    int c, r, a, b;
    cin >> c >> r;
    vector<vector<int>> cam(c+1);
    for (int i = 0; i < r; i++){
        cin >> a >> b;
        cam[a].push_back(b);
    }
    bool possi = false;
    for (int i = 0; i < cam[1].size(); i++){
        for (int j = 0; j < cam[cam[1][i]].size(); j++){
            if(cam[cam[1][i]][j] == c){
                possi = true;
            }
        }
    }
    if(possi){
        cout << "POSSIBLE" << endl;
    }
    else{
        cout << "IMPOSSIBLE" << endl;
    }

}