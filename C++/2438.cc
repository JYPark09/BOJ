#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(false);

    int N;
    std::cin >> N;

    for (int i = 1; i <= N; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            std::cout << '*';
        }

        std::cout << '\n';
    }
}
