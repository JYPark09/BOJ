#include <bits/stdc++.h>

int main()
{
    int N;
    std::cin >> N;

    int maxValue = -1000000;
    int minValue = 1000000;

    int tmp;
    for (int i = 0; i < N; ++i)
    {
        std::cin >> tmp;

        if (tmp > maxValue)
            maxValue = tmp;
        if (tmp < minValue)
            minValue = tmp;
    }

    std::cout << minValue << ' ' << maxValue;
}
