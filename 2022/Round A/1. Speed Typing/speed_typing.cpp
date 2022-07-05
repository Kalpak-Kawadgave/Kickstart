#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    long long ans;
    string l;
    string p;
    cin >> t;
    for (long long i = 1; i <= t; ++i)
    {
        cin >> l >> p;
        if (p == l) {
            cout << "Case #" << i << ": " << 0 << "\n";
            continue;
        }
        long long sizep = p.size();
        long long sizel = l.size();
        if(sizep < sizel) {
            cout << "Case #" << i << ": " << "IMPOSSIBLE" << "\n";
            continue;
        }
        long long trav = 0;
        bool imp = false;
        for (auto c : l) {
            while(c != p[trav]) {
                ++trav;
                if (trav >= sizep) {
                    cout << "Case #" << i << ": " << "IMPOSSIBLE" << "\n";
                    imp = true;
                    break;
                }
            }
            ++trav;
            if (imp == true) {
                break;
            }
        }
        if (imp == false) {
            cout << "Case #" << i << ": " << sizep - sizel << "\n";
        }
    }
    return 0;
}
