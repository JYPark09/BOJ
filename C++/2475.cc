#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(false);

    int sum = 0, t;
    for (int i = 0; i < 5; ++i)
    {
        std::cin >> t;

        sum += t * t;
    }

    std::cout << (sum % 10);
}
