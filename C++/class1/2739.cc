#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(false);

    int N;
    std::cin >> N;

    for (int i = 1; i <= 9; ++i)
    {
        std::cout << N << " * " << i << " = " << N * i << '\n';
    }
}
