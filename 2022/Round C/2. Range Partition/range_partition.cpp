#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long T, ans;
    cin >> T;
    for (long long i = 1; i <= T; ++i) {
        long long n, x, y;
        cin >> n >> x >> y;
        long long temp = x + y;
        long long sum = n*(n + 1) / 2;
        double mult = (double)sum/temp;
        double temp2 = mult * x;
        double temp3 = mult * y;
        int last = 7000;
        vector<int> ans;
        if (temp2 != floor(temp2) || temp3 != floor(temp3)) {
            cout << "Case #" << i << ": " << "IMPOSSIBLE" << "\n";
        }
        else {
            long long z = temp2;
            cout << "Case #" << i << ": " << "POSSIBLE" << "\n";
            long long temp6 = temp2;
            while (temp6 != 0) {
                int temp4 = min(n, temp6);
                int temp5 = min(last-1, temp4);
                last = temp5;
                ans.push_back(last);
                temp6 -= last;
            }
            cout << ans.size() << "\n";
            for (auto a : ans) {
                cout << a << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
