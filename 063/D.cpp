#include <bits/stdc++.h>

using namespace std;

bool enough(vector<long long>& monsters, long long A, long long B, long long T) {
    long long n = monsters.size();
    long long total_damage = B * T;

    long long additional_damage = 0;
    for (int i = 0; i < n; i++) {
        if (monsters[i] > total_damage) {
            additional_damage += ceil((monsters[i] - total_damage) / static_cast<double>(A - B));
        }
    }

    return additional_damage <= T;
}

long long binarySearch(vector<long long>& monsters, long long A, long long B, long long low, long long high) {
    int result = -1;
    while (low <= high){
        int mid = low + (high - low) / 2;
        if (enough(monsters, A, B, mid)){
            result = mid;
            high = mid - 1;
        } else{
            low = mid + 1;
        }
    }
    return result;
}

int main() {
    long long n, A, B;
    cin >> n >> A >> B;

    vector<long long> monsters(n);
    for (int i = 0; i < n; i++){
        cin >> monsters[i];
    }

    sort(monsters.begin(), monsters.end());
    long long max_health = monsters[n-1];
    long long max_explosions = max_health / B + 1;

    long long min_explosions = binarySearch(monsters, A, B, 0, max_explosions);

    cout << min_explosions << endl;

    return 0;
}
