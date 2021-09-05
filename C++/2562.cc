#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(false);

    int maxValue = -9999;
    int maxIndex = 0;

    int t;
    for (int i = 1; i <= 9; ++i)
    {
        std::cin >> t;

        if (t > maxValue)
        {
            maxValue = t;
            maxIndex = i;
        }
    }

    std::cout << maxValue << " " << maxIndex << std::endl;
}
