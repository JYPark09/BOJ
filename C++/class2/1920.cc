#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    vector<int> v(n);

    int tmp;
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &v[i]);
    }

    sort(begin(v), end(v));

    int m;
    scanf("%d", &m);

    for (int i = 0; i < m; ++i)
    {
        scanf("%d", &tmp);
        
        int left = 0, right = n - 1;

        while (left < right)
        {
            int mid = (left + right) / 2;
            if (tmp < v[mid]) right = mid - 1;
            else if (tmp > v[mid]) left = mid + 1;
            else break;
        }

        printf("%d\n", (tmp == v[(left + right) / 2]));
    }
}
