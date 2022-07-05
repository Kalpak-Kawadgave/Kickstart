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
        int N = 0;
        string s;
        cin >> N >> s;
        bool up = false;
        bool lo = false;
        bool sp = false;
        bool di = false;
        for (char c: s) {
            if (isdigit(c)) {
                di = true;
            }
            else if (islower(c)) {
                lo = true;
            }           
            else if (isupper(c)) {
                up = true;
            }           
            else{
                sp = true;
            }
        }
        if (di == false) {
            s += '1';
            N += 1;
        }
        if (lo == false) {
            s += 'a';
            N += 1;
        }
        if (up == false) {
            s += 'A';
            N += 1;
        }
        if (sp == false) {
            s += '#';
            N += 1;
        }
        while (N < 7) {
            s += 'a';
            N += 1;
        }
        cout << "Case #" << i << ": " << s << "\n";
    }
    return 0;
}
