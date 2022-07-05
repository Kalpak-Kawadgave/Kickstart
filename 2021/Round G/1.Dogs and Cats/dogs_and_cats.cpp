#include <iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long t, n, d, c, m;
	string s;
	cin >> t;
	for (long long i = 1; i <= t; ++i)
	{
		bool flag = false;
		cin >> n >> d >> c >> m;
		cin >> s;
		bool check = false;
		long long j;
		for (j = 0; j < n; ++j)
		{
			if (s[j] == 'D')
			{
				if (d <= 0)
				{
					cout << "Case #" << i << ": NO\n";
					flag = true;
					break;
				}
				--d;
				c += m;
			}
			else
			{
				if (c <= 0)
				{
					break;
				}
				--c;
			}
		}
		if (j == n&& flag == false) {
			cout << "Case #" << i << ": YES\n";
			continue;
		}
		if (flag == false) {
			for (; j < n; ++j)
			{
				if (s[j] == 'D')
				{
					cout << "Case #" << i << ": NO\n";
					check = true;
					break;
				}
			}
			if (check == false)
			{
				cout << "Case #" << i << ": YES\n";
			}
		}
	}
	return 0;
}
