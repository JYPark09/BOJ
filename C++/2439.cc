#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(false);

    int N;
    std::cin >> N;

    for (int i = 1; i <= N; ++i)
    {
        int j;
        for (j = 0; j < N - i; ++j)
            std::cout << ' ';

        for (; j < N; ++j)
            std::cout << '*';

        std::cout << '\n';
    }
}
