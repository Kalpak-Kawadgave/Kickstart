#include <bits/stdc++.h>
using namespace std;
bool compare(vector<int> x, vector<int> y)
{
    return x[0] > y[0];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, d, n, k, h, s, e, max, trav;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        max = 0;
        cin >> d >> n >> k;
        vector<int> count(d + 1, 0);
        fill_n(back_inserter(count), d + 1, 0);
        vector<int> happiness(d + 1, 0);
        fill_n(back_inserter(happiness), d + 1, 0);
        vector<vector<int>> rides;
        for (int j = 0; j < n; j++)
        {
            cin >> h >> s >> e;
            vector<int> v = {h, s, e};
            rides.push_back(v);
        }
        sort(rides.begin(), rides.end(), compare);
        for (int j = 0; j < n; j++)
        {
            for (int z = rides[j][1]; z <= rides[j][2]; z++)
            {
                if (count[z] < k)
                {
                    happiness[z] += rides[j][0];
                    count[z]++;
                }
            }
        }
        for (int j = 1; j <= d; j++)
        {
            if (max < happiness[j])
            {
                max = happiness[j];
            }
        }
        cout << "Case #" << i << ": " << max << "\n";
    }
    return 0;
}
