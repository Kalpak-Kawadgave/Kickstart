#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long T, ans;
    cin >> T;
    for (long long i = 1; i <= T; ++i) {
        long long n;
        ans = 0;
        vector<bool> red;
        vector<bool> yellow;
        vector<bool> blue;
        ans = 0;
        string p;
        cin >> n >> p;
        for (char a : p) {
            if (a == 'R') {
                red.push_back(1);
                yellow.push_back(0);
                blue.push_back(0);
            }
            else if (a == 'Y') {
                red.push_back(0);
                yellow.push_back(1);
                blue.push_back(0);

            }
            else if (a == 'B') {
                red.push_back(0);
                yellow.push_back(0);
                blue.push_back(1);

            }
            else if (a == 'O') {
                red.push_back(1);
                yellow.push_back(1);
                blue.push_back(0);

            }
            else if (a == 'P') {
                red.push_back(1);
                yellow.push_back(0);
                blue.push_back(1);

            }
            else if (a == 'G') {
                red.push_back(0);
                yellow.push_back(1);
                blue.push_back(1);

            }
            else if (a == 'A') {
                red.push_back(1);
                yellow.push_back(1);
                blue.push_back(1);

            }
            else {
                red.push_back(0);
                yellow.push_back(0);
                blue.push_back(0);
            }
        }
            if (red[0] == 1) {
                ++ans;
            }            if (yellow[0] == 1) {
                ++ans;
            }            if (blue[0] == 1) {
                ++ans;
            }
            if (n >= 2) {
                for (size_t i = 0; i < n - 1; i++)
                {
                    if (red[i] == 0 && red[i + 1] == 1) {
                        ++ans;
                    }
                }for (size_t i = 0; i < n - 1; i++)
                {
                    if (yellow[i] == 0 && yellow[i + 1] == 1) {
                        ++ans;
                    }
                }for (size_t i = 0; i < n - 1; i++)
                {
                    if (blue[i] == 0 && blue[i + 1] == 1) {
                        ++ans;
                    }
                }
            }
        
        cout << "Case #" << i << ": " << ans << "\n";
    }
    return 0;
}
