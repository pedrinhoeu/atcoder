 #include <bits/stdc++.h>

using namespace std;

int main(){
    long long h, w;
    cin >> h >> w;
    vector<vector<long long>> nums(h, vector<long long>(w,0));
    long long c;
    cin >> c;
    vector<long long> col(c);
    for (int i = 0; i < c; i++){
        cin >> col[i];
    }
    long long co = 0;
    bool alt = false;
    for (int i = 0; i < h; i++){
        if(alt){
            for (int j = w-1; j > -1; j--){
                if(col[co] == 0){
                    co++;
                }
                nums[i][j] = co+1;
                col[co] -= 1;
            }
            alt = false;
        }
        else{
            for (int j = 0; j < w; j++){
                if(col[co] == 0){
                    co++;
                }
                nums[i][j] = co+1;
                col[co] -= 1;
            }
            alt = true;
        }
    }
    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }
    
}