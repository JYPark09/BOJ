#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(false);

    int x, y, w, h;
    std::cin >> x >> y >> w >> h;

    const int diffs[4] = { x, y, w - x, h - y };
    int minValue = diffs[0];

    for (int i = 0; i < 4; ++i)
    {
        if (diffs[i] < minValue)
            minValue = diffs[i];
    }

    std::cout << minValue;
}
