#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(false);

    int N, X;
    std::cin >> N >> X;

    int tmp;
    for (int i = 0; i < N; ++i)
    {
        std::cin >> tmp;

        if (tmp < X)
            std::cout << tmp << ' ';
    }
}
