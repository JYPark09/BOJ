#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(false);

    int N;
    std::cin >> N;

    int M = -999;
    std::vector<double> scores(N);
    for (int i = 0; i < N; ++i)
    {
        std::cin >> scores[i];
        if (M < scores[i])
            M = scores[i];
    }

    double sum = 0;
    for (int i = 0; i < N; ++i)
    {
        sum += scores[i] / M * 100;
    }

    std::cout << sum / N;
}
