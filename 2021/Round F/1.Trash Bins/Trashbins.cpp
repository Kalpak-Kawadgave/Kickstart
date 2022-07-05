#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t, n, prev, next, count, m, end;
    long long ans;
    vector<int> trashcans;
    string s;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        cin >> n >> s;
        ans = 0;
        trashcans.clear();
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (s[j] == '1')
            {
                count++;
                trashcans.push_back(j);
            }
        }
        if (count == n)
        {
            cout << "Case #" << i << ": 0\n";
            continue;
        }
        if (count == 1)
        {
            m = trashcans[0];
            ans = ((m) * (m + 1) / 2) + ((n - 1 - m) * (n - m) / 2);
            cout << "Case #" << i << ": " << ans << "\n";
            continue;
        }
        m = trashcans.size();
        end = 1;
        prev = trashcans[end - 1];
        next = trashcans[end];
        for (int j = 0; j < n; j++)
        {
            if (end != m - 1 && j > next)
            {
                end++;
                prev = trashcans[end - 1];
                next = trashcans[end];
            }
            if (s[j] == '0')
            {
                ans += min(abs(prev - j), abs(next - j));
            }
        }
        cout << "Case #" << i << ": " << ans << "\n";
    }
    return 0;
}
