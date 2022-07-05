#include <bits/stdc++.h>
using namespace std;

string MinValue(string N, int X)
{
    if (X == 9) {
        N.insert(N.begin() + 1, '0');
        return N;
    }
    long long len = N.size();
    long long position = len;
    for (long long i = len - 1; i >= 0; i--) {
        if ((N[i] - '0') > X) {
            position = i;
        }
    }
    N.insert(N.begin() + position, X + '0');
    return N;
}

int findSum(string str)
{
    long long sum = 0;

    for (char ch : str) {
        sum += ch - '0';
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long  t;
    string  n;
    cin >> t;
    for (long long  i = 1; i <= t; ++i)
    {
        cin >> n;
        long long sum = findSum(n);
        int  x = 0;
        x = 9 - (sum % 9);
        n = MinValue(n, x);
        cout << "Case #" << i << ": " << n << "\n";
    }
    return 0;
}
