
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, cores[8]{0}, coringas = 0, nums=0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a;
        if(1 <= a && a <= 399){
            cores[0] += 1;
        }
        else if(400 <= a && a <= 799){
            cores[1] += 1;
        }
        else if(800 <= a && a <= 1199){
            cores[2] += 1;
        }
        else if(1200 <= a && a <= 1599){
            cores[3] += 1;
        }
        else if(1600 <= a && a <= 1999){
            cores[4] += 1;
        }
        else if(2000 <= a && a <= 2399){
            cores[5] += 1;
        }
        else if(2400 <= a && a <= 2799){
            cores[6] += 1;
        }
        else if(2800 <= a && a <= 3199){
            cores[7] += 1;
        }
        else if(4800 >= a){
            coringas += 1;
        }
    }
    for (int i = 0; i < 8; i++){
        if(cores[i] > 0){
            nums += 1;
        }
    }
    if(nums == 0){
        if(coringas > 0){
            nums = 1;
            coringas -= 1;
        }
    }
    cout << nums << " " <<  nums + coringas << endl;
}