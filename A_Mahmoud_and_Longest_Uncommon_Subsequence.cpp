#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    a == b ? cout << -1 : cout << max(a.size(), b.size());
}