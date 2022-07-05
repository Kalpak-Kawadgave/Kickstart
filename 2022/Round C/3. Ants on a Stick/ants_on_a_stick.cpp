#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <deque>

using namespace std;

bool compare(vector<int>& a, vector<int>& b) {
    return a[0] < b[0];
};


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    for (long long i = 1; i <= T; ++i) {
        int n, l;
        int p, d;
        deque<vector<int>> ants;
        cin >> n >> l;
        for (int j = 1; j <= n; ++j) {
            cin >> p >> d;
            ants.push_back({ p, d, j });
        }
        sort(ants.begin(), ants.end(), compare);
        vector<vector<int>> time;
        for (auto a : ants) {
            if (a[1] == 0) {
                time.push_back({ a[0], 0 });
            }
            else {
                time.push_back({ l - a[0], 1 });
            }
        }
        sort(time.begin(), time.end(), compare);
        cout << "Case #" << i << ": ";
        size_t size = time.size();
        time.push_back({ -1,-1 });
        for (int a = 0; a < size; ++a) {
            if (time[a][0] == time[a + 1][0]) {
                if (ants.front()[2] < ants.back()[2]) {
                    cout << ants.front()[2] << " ";
                    cout << ants.back()[2] << " ";
                    ants.pop_front();
                    ants.pop_back();
                    ++a;
                }
                else {
                    cout << ants.back()[2] << " ";
                    cout << ants.front()[2] << " ";
                    ants.pop_front();
                    ants.pop_back();
                    ++a;
                }
            }
            else {
                if (time[a][1] == 0) {
                    cout << ants.front()[2] << " ";
                    ants.pop_front();
                }
                else {
                    cout << ants.back()[2] << " ";
                    ants.pop_back();
                }
            }
        }
        cout << "\n";
    }
    return 0;
}
