#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(false);

    int N;
    std::cin >> N;

    std::string line;
    std::cin >> line;
    int sum = 0;
    for (int i = 0; i < N; ++i)
    {
        sum += (line[i] - '0');
    }

    std::cout << sum;
}
