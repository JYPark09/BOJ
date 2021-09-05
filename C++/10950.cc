#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(false);

    int N;
    std::cin >> N;

    int a, b;
    for (int i = 0; i < N; ++i)
    {
        std::cin >> a >> b;
        std::cout << a + b << '\n';
    }
}
