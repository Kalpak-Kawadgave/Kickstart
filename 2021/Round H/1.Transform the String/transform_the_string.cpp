#include <iostream>
#include <vector>



using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long T, ans;
    cin >> T;
    for (long long i = 1; i <= T; ++i) {
        ans = 0;
        string s, f;
        vector<int> fstring;
        vector<int> cost(26,-1);
        cin >> s >> f;
        int temp = f.size();
        fstring.push_back(f[temp - 1] - 'a' - 26);
        for (char a : f) {
            fstring.push_back(a-'a');
        }
        fstring.push_back(f[0] - 'a' +26);
        int j = 0;

            for (int i = 0; i < 26; ++i) {
                if (i > fstring[j + 1]) {
                    ++j;
                }
                cost[i] = min(i-(fstring[j]), abs((fstring[j + 1] - i)));
            }

        for (char a : s) {
            ans += cost[a - 'a'];
        }
    cout << "Case #" << i << ": " << ans << "\n";
    }
    return 0;
}
